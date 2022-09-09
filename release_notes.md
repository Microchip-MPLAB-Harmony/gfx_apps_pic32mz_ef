---
title: Release notes
nav_order: 99
---

# ![MPLAB® Harmony Graphics Suite](./docs/html/mhgs.png) Microchip MPLAB® Harmony 3 Graphics application examples for PIC32MZ EF Family

## Harmony 3 Graphics application examples for PIC32MZ EF family v3.10.0

### Development kit and demo application support

Following table provides number of peripheral library examples available for different development kits.

| Development Kits  | MPLABx applications |
|:-----------------:|:-------------------:|
| [Curiosity PIC32MZ EF 2.0 Development Board](https://www.microchip.com/developmenttools/ProductDetails/DM320209)     | 10 |
|

## Release v3.10.0


### New Features


New features added in this release are as follows:

- Added MCC configurations to all applications


## Release v3.9.1


### New Features


New features added in this release are as follows:

- Added Legato Quickstart for PIC32MZ EF Curiosity 2.0 with maXTouch Curiosity Pro Display via 16-bit parallel interface
- Added Legato Quickstart in 90-orientation for PIC32MZ EF Curiosity 2.0 with High-Performance 4.3" WQVGA Display Module with maXTouch® Technology
- Added Legato Quickstart for PIC32MZ EF Curiosity 2.0 using 8-bit CLUT with High-Performance WVGA LCD Display Module with maXTouch ® Technology


### Issues Fixed


- Fixed issues with packages and documentation


## Release v3.9.0


### New Features


New features added in this release are as follows:

- Applications migrated from gfx and gfx_apps repository to this new application repository for PIC32MZ EF development support


### Known Issues


The current known issues are as follows:

- Legato Quickstart for PIC32MZ EF Curiosity 2.0 using 8-bit CLUT with High-Performance WVGA LCD Display Module with maXTouch ® Technology [legato_qs_mzef_cu_tm5000](./apps/legato_quickstart/firmware/legato_qs_mzef_cu_tm5000.X/readme.md) supports TM5000 90-000146-**B0** only
- Legato Flash: Requires MPLAB® XC32 C/C++ Compiler v3.01


### Development Tools


- [MPLAB® X IDE v6.00](https://www.microchip.com/mplab/mplab-x-ide)
- MPLAB® X IDE plug-ins:
    - [MPLAB® Code Configurator (MCC) v5.1.9](https://github.com/Microchip-MPLAB-Harmony/mplabx-plugin)
    - [MPLAB® Harmony Configurator (MHC) v3.8.4 and above](https://github.com/Microchip-MPLAB-Harmony/mplabx-plugin)
- [MPLAB® XC32 C/C++ Compiler v4.10](https://www.microchip.com/mplab/compilers)


### Dependent Components

* [GFX v3.11.1](https://github.com/Microchip-MPLAB-Harmony/gfx/releases/tag/v3.11.1)
* [Harmony 3 USB v3.10.0](https://github.com/Microchip-MPLAB-Harmony/usb/releases/tag/v3.10.0)
