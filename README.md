# Aura — The Perfect Late-Night Study Buddy!
Aura is a smart lamp powered by a ESP32 that wakes up automatically when a person approaches it! It also features a MAX98357A amplifier built in onboard to drive the Bluetooth speaker built in! A BME280 is also included in to display details for the atmosphere around it and to display that on the built in TFT display!

<img width="704" height="714" alt="image" src="https://github.com/user-attachments/assets/ff9a1802-ccb9-44d4-a42e-06580fb0ca18" />

# Pictures: 
<img width="2160" height="1331" alt="PCB_PCB1_2026-10-25" src="https://github.com/user-attachments/assets/3ee4685c-4920-4457-a0bd-945638955ea9" />
<img width="2362" height="1672" alt="SCH_Schematic1_1-P1_2026-10-25" src="https://github.com/user-attachments/assets/f65df508-1406-4533-84fc-54b790cc7e14" />

# Features
|Feature|Item|
|-|-|
|Microcontroller:|ESPRESSIF ESP32-S3-WROOM-1-N16R2|
|Radar:|LD2410C|
|Display|2.8in TFT display, ILI9341 driver (SPI)|
|Speaker:|3070 4-Ohm 5-Watt Speaker|
|Amplifier:|MAX98537A Class-D DAC|
|Atmospheric Sensor:|BME280 Temperarture, Humidity, and Pressure Sensor|

# BOM

| Qty | Description | Designators | Manufacturer | MPN | Supplier Link | Unit Price | Total Price |
|-|-|-|-|-|-|-|-|
| 1 | 10µF Capacitor | C1 | Samsung | CL05A106MQ5NUNC | [LCSC C15525](https://www.lcsc.com/product-detail/C15525.html) | $0.0039 | $0.0039 |
| 1 | 100nF Capacitor | C2 | Yageo | CC0402KRX7R7BB104 | [LCSC C60474](https://www.lcsc.com/product-detail/C60474.html) | $0.0007 | $0.0007 |
| 1 | 22µF Capacitor | C4 | Samsung | CL10A226MQ8NRNE | [LCSC C159801](https://www.lcsc.com/product-detail/C159801.html) | $0.0051 | $0.0051 |
| 1 | 100nF Capacitor | C5 | Yageo | CC0603KRX7R9BB104 | [LCSC C14663](https://www.lcsc.com/product-detail/C14663.html) | $0.0016 | $0.0016 |
| 3 | 1µF Capacitor | C6, C7, C8 | Yageo | CC0603KRX7R9BB105 | [LCSC C559769](https://www.lcsc.com/product-detail/C559769.html) | $0.0085 | $0.0255 |
| 1 | 10µF Capacitor | C9 | Yageo | CC0603KRX5R6BB106 | [LCSC C326057](https://www.lcsc.com/product-detail/C326057.html) | $0.0275 | $0.0275 |
| 1 | 3-Pin Header | H1 | BOOMELE | 2.54-1×3P | [LCSC C49257](https://www.lcsc.com/product-detail/C49257.html) | $0.0043 | $0.0043 |
| 1 | 14-Pin Header | H2 | HCTL | PZ254-1-14-Z-8.5 | [LCSC C2894937](https://www.lcsc.com/product-detail/C2894937.html) | $0.0299 | $0.0299 |
| 1 | 100kΩ Resistor | R1 | FOJAN | FRC0402J104 TS | [LCSC C2906883](https://www.lcsc.com/product-detail/C2906883.html) | $0.0002 | $0.0002 |
| 2 | 5.1kΩ Resistor | R2, R3 | FOJAN | FRC0402J512 TS | [LCSC C2906948](https://www.lcsc.com/product-detail/C2906948.html) | $0.0002 | $0.0004 |
| 1 | 634kΩ Resistor | R4 | UNI-ROYAL | 0402WGF6343TCE | [LCSC C270588](https://www.lcsc.com/product-detail/C270588.html) | $0.0002 | $0.0002 |
| 3 | 10kΩ Resistor | R5, R6, R7 | Yageo | RC0603FR-0710KL | [LCSC C98220](https://www.lcsc.com/product-detail/C98220.html) | $0.0005 | $0.0015 |
| 1 | HLK-LD2410C-P mmWave Sensor | SM1 | HI-LINK | HLK-LD2410C-P | [LCSC C19723500](https://www.lcsc.com/product-detail/C19723500.html) | $0.8046 | $0.8046 |
| 2 | Test Point | SPK+, SPK- | N/A | N/A | N/A | $0.9499 | $1.8998 |
| 2 | Tactile Switch | SW1, SW2 | Hanxia | HX 3x4x2-2P-1.6N | [LCSC C49234124](https://www.lcsc.com/product-detail/C49234124.html) | $0.0039 | $0.0078 |
| 1 | ESP32-S3 Module | U1 | Espressif | ESP32-S3-WROOM-1-N16R2 | [LCSC C2913205](https://www.lcsc.com/product-detail/C2913205.html) | $0.7874 | $0.7874 |
| 1 | I2S Amplifier | U2 | Analog Devices / Maxim | MAX98357AETE+T | [LCSC C910544](https://www.lcsc.com/product-detail/C910544.html) | $0.1993 | $0.1993 |
| 1 | Environmental Sensor | U3 | Bosch | BME280 | [LCSC C92489](https://www.lcsc.com/product-detail/C92489.html) | $1.2102 | $1.2102 |
| 1 | 3.3V LDO Regulator | U4 | UMW | AMS1117-3.3 | [LCSC C347222](https://www.lcsc.com/product-detail/C347222.html) | $0.0074 | $0.0074 |
| 1 | USB Type-C Connector | USB1 | HANBO | MC-403L68-Z10 | [LCSC C47326496](https://www.lcsc.com/product-detail/C47326496.html) | $0.0090 | $0.0090 |
| 1 | 4Ω/8Ω 5W-10W Speaker (30×70×17mm) | - | Generic | LCD Monitor Speaker Horn | [AliExpress](https://www.aliexpress.us/item/3256806864566208.html) | $3.39 | $3.39 |
| 1 | 2.8" SPI TFT Touch Display (ILI9341, 240×320) | - | Generic | ILI9341 SPI TFT Touch Module | [AliExpress](https://www.aliexpress.us/item/3256806129218488.html) | $6.45 | $6.45 |
| 1 | WS2812B Addressable RGB LED Strip | - | Generic | WS2812B (5V) | [AliExpress](https://www.aliexpress.us/item/3256807802893080.html) | $4.85 | $4.85 |
| TOTAL | 49 Components |  |  |  |  |  | $26.57 |
