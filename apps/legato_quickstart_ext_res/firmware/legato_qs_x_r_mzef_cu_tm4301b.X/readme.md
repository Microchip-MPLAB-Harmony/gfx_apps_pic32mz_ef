
![](../../../../docs/images/mhgs.png) legato_qs_x_r_mzef_cu_tm4301b.X

Defining the Architecture
-------------------------

![](../../../../docs/images/pic32mz_ef_cu_wqvga_qspi_external_arch.png)

In this configuration, the application uses the Low Cost Controllerless (LCC) driver setup. After the initialization phase, the application transitions into the paint phase, where it draws an image to the frame buffer. The graphics driver stores an internal frame buffer and the application uses a gfx_driver API to write pixel data directly to the frame buffer memory address.

The LCC driver continuously refreshes the display panel with data from the frame buffer and the images are shown on the display.

The Legato library is configured to enable its media streaming interface.  The application defines the functions required by the graphics library to interface with the external memory sources.  

### Demonstration Features

-   Controllerless display driver
-   16-bit RGB Color Mode Frame Buffer in SRAM memory
-   Legato Graphics Library
-   Touch Input
-   External Media Streaming

Creating the Project Graph
--------------------------

![](../../../../docs/images/lcc_rgb565_mxt_mzef_cu_ext_res_pg.png)

The Project Graph diagram below shows the Harmony components that are included in this application. Lines between components are drawn to satisfy components that depend on a capability that another component provides.

Building the Application
------------------------

The parent directory for this application is gfx/apps/legato_quickstart_ext_res. To build this application, use MPLAB X IDE to open the gfx/apps/legato_quickstart_ext_res/firmware/legato_qs_x_r_mzef_cu_tm4301b.X project file.

The following table lists configuration properties:

|Project Name|BSP Used|Graphics Template Used|Description|
|:-----------|:-------|:---------------------|:----------|
|legato_qs_x_r_mzef_cu_tm4301b.X|PIC32MZ EF Curiosity 2.0|Legato Graphics w/ PDA TM4301B Display|

> \*\*\_NOTE:\_\*\* This application may contain custom code that is marked by the comments // START OF CUSTOM CODE ... and // END OF CUSTOM CODE. When using the MPLAB Harmony Configurator to regenerate the application code, use the "ALL" merging strategy and do not remove or replace the custom code.

Configuring the Hardware
------------------------

The final setup should be:

Configure the hardware as follows:

-   Connect the RGB 565 Graphics Adapter to the PIC32MZ EF Curiosity board.
-   Connect the PDA TM4301B display to the RGB 565 Graphics Adapter using the appropriate ribbon cable.
-   Power up the board by connecting the a micro USB cable to the Debug USB connector on the Curiosity board.

![](../../../../docs/images/pic32mzef_cu_565_wqvga_setup.png)

Running the Demonstration
-------------------------

When power-on is successful, the following screen will appear on the display

![](../../../../docs/images/legato_quickstart_ext_res.png)

Pressing the button will cause the application to load a new image. The image cycles in order from Uncompressed RAW with Direct Blit, Uncompressed RAW, Run-Length Encoded (RLE) RAW, JPEG and PNG.

The MPLAB Harmony Graphics Suite logo is also a button. Pressing the logo will toggle the application between English and Simplified Chinese.

![](../../../../docs/images/legato_quickstart_ext_res_chinese.png)

Note that all images and glyphs are retrieved from external NVM via QSPI. The application is purposely setup in single-buffer configuration to allow visual inspection of the data retrieval speed of the various images and glyphs.

![](../../../../docs/images/legato_quickstart_ext_res_rle.png)

* * * * *

 
