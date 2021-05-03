---
parent: Example Applications
title: Legato Quickstart External Resources
nav_order: 5
---

# Legato Quickstart External Resources

![](./../../docs/images/legato_quickstart_ext_res.png)

The legato_quickstart_external_resources (external flash reader) application demonstrates reading multiple images, multi-lingual strings and multiple font assets from both internal and external non-volatile memory (NVM).  The external resources are pre-programmed into the NVM using the legato_flash demonstration application.
The intent of legato_quickstart_external_resources (external flash reader) application is to demonstrate Legato Graphics Library’s ability to support assets stored on external NVM.  Another intent is to highlight possible draw performance drawbacks with these techniques and to serve as a guiding post for UI application designers on their judicious use.

Refer to [legato_flash](../legato_flash/readme.md) for external NVM programming information.

Applications requiring multiple images or non-alphabet-based languages with large number of glyphs, have a very large NVM requirement for their graphics resources.   In such applications, storing these graphics resources on-chip may be inefficient or impossible.  The solution is to store the graphics resources to off-chip NVM, thereby preserving the on-chip NVM for program memory and allowing for more complex functional features.

The legato_quickstart_external_resources (external flash reader) application populates some of its user interface from assets stored on on-chip NVM and other parts of it from assets stored as binary data on an external NVM.   The resources are previous copied into the external NVM using the legato_flash application.

To demonstrate how to access graphics resources stored on an external memory device, three components are needed:

* File Packaging 
* Bootloader Application 
* Fetch Application 

The following figure shows the external resources process diagram.

![](./../../docs/images/external_resources_flash_reader_diagram.png)

|MPLABX Configuration|Board Configuration|
|:-------------------|:------------------|
|[legato_qs_x_r_mzef_cu_tm4301b.X](./firmware/legato_qs_x_r_mzef_cu_tm4301b.X/readme.md)|[PIC32MZ EF Curiosity Development Board](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/DM320209) using LCC to drive the [High-Performance 4.3" WQVGA Display Module with maXTouch® Technology](https://www.microchip.com/DevelopmentTools/ProductDetails/PartNO/AC320005-4) via [565 LCD Adapter Graphics Card](https://www.microchip.com/Developmenttools/ProductDetails/AC320212)|