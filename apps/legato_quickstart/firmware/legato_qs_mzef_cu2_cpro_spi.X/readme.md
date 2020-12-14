
![](../../../../docs/images/mhgs.png) legato_qs_mzef_cu2_cpro_spi.X

Defining the Architecture
-------------------------

![](../../../../docs/images/pic32mz_ef_cu_cpro_ili9488.png)

In this configuration, the application uses the ILI9488 SPI driver setup. After the initialization phase, the application transitions into the paint phase, where it sends pixel data through the ILI9488 driver to the external display controller.

### Demonstration Features

-   ILI9488 Display Controller (SPI-based)
-   16-bit RGB Color Mode
-   Legato Graphics Library
-   Touch Input

Creating the Project Graph
--------------------------

![](../../../../docs/images/ili9488_rgb565_mxt_mzef_cu_xpro_spi_pg.png)

The Project Graph diagram below shows the Harmony components that are included in this application. Lines between components are drawn to satisfy components that depend on a capability that another component provides.

Building the Application
------------------------

The parent directory for this application is gfx/apps/legato_quickstart. To build this application, use MPLAB X IDE to open the gfx/apps/legato_quickstart/firmware/legato_qs_mzef_cu2_cpro_spi.X project file.

The following table lists configuration properties:

|Project Name|BSP Used|Graphics Template Used|Description|
|:-----------|:-------|:---------------------|:----------|
|legato_qs_mzef_cu2_cpro_spi.X|PIC32MZ EF Curiosity 2.0|Legato Graphics w/ MXT Curiosity Pro Display|

> \*\*\_NOTE:\_\*\* This application may contain custom code that is marked by the comments // START OF CUSTOM CODE ... and // END OF CUSTOM CODE. When using the MPLAB Harmony Configurator to regenerate the application code, use the "ALL" merging strategy and do not remove or replace the custom code.

Configuring the Hardware
------------------------

The final setup should be:

Configure the hardware as follows:

-   Connect the 24-bit Passthrough Graphics Adapter to the PIC32MZ EF Curiosity board.
-   Connect the PDA TM4301B display to the 24-bit Passthrough Graphics Adapter using the appropriate ribbon cable.
-   Power up the board by connecting the a micro USB cable to the Debug USB connector on the Curiosity board.

![](../../../../docs/images/ili9488_rgb565_mxt_mzef_cu_xpro_parallel_cf1.png)

Running the Demonstration
-------------------------

Once the board is powered on, the application will run and show the following image on the display panel.

![](../../../../docs/images/legato_quickstart.png)

* * * * *

 
