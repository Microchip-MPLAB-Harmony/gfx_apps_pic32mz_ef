/*******************************************************************************
* Copyright (C) 2020 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/

/*******************************************************************************
  Custom ExternalControllerDisplay Top-Level Driver Source File

  File Name:
    drv_gfx_custom_external.c

  Summary:
    Top level driver for ExternalController.

  Description:
    Build-time generated implementation for the ExternalControllerDriver.

    Created with MPLAB Harmony Version 3.0
*******************************************************************************/




#include "definitions.h"

#include "gfx/interface/drv_gfx_disp_intf.h"
#include "drv_gfx_external_controller.h"

#include "system/time/sys_time.h"


#ifdef GFX_DISP_INTF_PIN_RESET_Clear
#define DRV_ExternalController_Reset_Assert()      GFX_DISP_INTF_PIN_RESET_Clear()
#define DRV_ExternalController_Reset_Deassert()    GFX_DISP_INTF_PIN_RESET_Set()
#else
#error "ERROR: GFX_DISP_INTF_PIN_RESET not defined. Please define in Pin Manager."
#define DRV_ExternalController_Reset_Assert()
#define DRV_ExternalController_Reset_Deassert()
#endif

#define DRV_ExternalController_NCSAssert(intf)   GFX_Disp_Intf_PinControl(intf, \
                                    GFX_DISP_INTF_PIN_CS, \
                                    GFX_DISP_INTF_PIN_CLEAR)

#define DRV_ExternalController_NCSDeassert(intf) GFX_Disp_Intf_PinControl(intf, \
                                    GFX_DISP_INTF_PIN_CS, \
                                    GFX_DISP_INTF_PIN_SET)

typedef enum
{
    INIT = 0,
    RUN,
    ERROR,
} DRV_STATE;

typedef struct ILI9488_DRV 
{   
    /* Driver state */
    DRV_STATE state;
        
    /* Port-specific private data */
    void *port_priv;
} ExternalController_DRV;

ExternalController_DRV drv;



/* ************************************************************************** */

/**
  Function:
    static void DRV_ExternalController_DelayMS(int ms)

  Summary:
    Delay helper function.

  Description:
    This is a helper function for delay using the system tick timer.

  Parameters:
    ms      - Delay in milliseconds

  Returns:
    None.

*/

static inline void DRV_ExternalController_DelayMS(int ms)
{
    SYS_TIME_HANDLE timer = SYS_TIME_HANDLE_INVALID;

    if (SYS_TIME_DelayMS(ms, &timer) != SYS_TIME_SUCCESS)
        return;
    while (SYS_TIME_DelayIsComplete(timer) == false);
}

/**
  Function:
    static void DRV_ExternalController_Reset(void)

  Summary:
    Toggles the hardware reset to the ExternalController.

  Description:
    This function toggles the GPIO pin for asserting reset to the ExternalController.

  Parameters:
    None

  Returns:
    None

*/
static void DRV_ExternalController_Reset(void)
{
    DRV_ExternalController_Reset_Assert();
    DRV_ExternalController_DelayMS(10);
    DRV_ExternalController_Reset_Deassert();
    DRV_ExternalController_DelayMS(10);
}

int DRV_ExternalController_Initialize(void)
{
    drv.state = INIT;

    return 0;
}

static int DRV_ExternalController_Configure(ExternalController_DRV *drvPtr)
{
    GFX_Disp_Intf intf = (GFX_Disp_Intf) drvPtr->port_priv;
    uint8_t cmd;
    uint8_t parms[16];

    DRV_ExternalController_NCSAssert(intf);

    cmd = 0x0;
    GFX_Disp_Intf_WriteCommand(intf, cmd);

    cmd = 0x0;
    GFX_Disp_Intf_WriteCommand(intf, cmd);

    cmd = 0x0;
    GFX_Disp_Intf_WriteCommand(intf, cmd);

    DRV_ExternalController_NCSDeassert(intf);

    return 0;
}


/**
  Function:
    static void DRV_ExternalController_Update(void)

  Summary:
    Driver-specific implementation of GFX HAL update function.

  Description:
    On GFX update, this function flushes any pending pixels to the ExternalController.

  Parameters:
    None.

  Returns:
    * GFX_SUCCESS       - Operation successful
    * GFX_FAILURE       - Operation failed

*/
void DRV_ExternalController_Update(void)
{
    uint32_t openVal;
    
    if(drv.state == INIT)
    {
        openVal = GFX_Disp_Intf_Open();
        
        drv.port_priv = (void *)openVal;
        
        if (drv.port_priv == 0)
        {
            drv.state = ERROR;
            return;
        }

        DRV_ExternalController_Reset();

        DRV_ExternalController_Configure(&drv);

        drv.state = RUN;
    }
}


