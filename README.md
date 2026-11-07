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

| Qty | Description | Designators | Manufacturer | MPN | LCSC |
|-----:|-------------|-------------|-------------|-----|------|
| 1 | 10µF Capacitor | C1 | Samsung | CL05A106MQ5NUNC | [C15525](https://www.lcsc.com/product-detail/C15525.html) |
| 1 | 100nF Capacitor | C2 | Yageo | CC0402KRX7R7BB104 | [C60474](https://www.lcsc.com/product-detail/C60474.html) |
| 1 | 22µF Capacitor | C4 | Samsung | CL10A226MQ8NRNE | [C159801](https://www.lcsc.com/product-detail/C159801.html) |
| 1 | 100nF Capacitor | C5 | Yageo | CC0603KRX7R9BB104 | [C14663](https://www.lcsc.com/product-detail/C14663.html) |
| 3 | 1µF Capacitor | C6, C7, C8 | Yageo | CC0603KRX7R9BB105 | [C559769](https://www.lcsc.com/product-detail/C559769.html) |
| 1 | 10µF Capacitor | C9 | Yageo | CC0603KRX5R6BB106 | [C326057](https://www.lcsc.com/product-detail/C326057.html) |
| 1 | 3-Pin Header | H1 | BOOMELE | 2.54-1×3P | [C49257](https://www.lcsc.com/product-detail/C49257.html) |
| 1 | 14-Pin Header | H2 | HCTL | PZ254-1-14-Z-8.5 | [C2894937](https://www.lcsc.com/product-detail/C2894937.html) |
| 1 | 100kΩ Resistor | R1 | FOJAN | FRC0402J104 TS | [C2906883](https://www.lcsc.com/product-detail/C2906883.html) |
| 2 | 5.1kΩ Resistor | R2, R3 | FOJAN | FRC0402J512 TS | [C2906948](https://www.lcsc.com/product-detail/C2906948.html) |
| 1 | 634kΩ Resistor | R4 | UNI-ROYAL | 0402WGF6343TCE | [C270588](https://www.lcsc.com/product-detail/C270588.html) |
| 3 | 10kΩ Resistor | R5, R6, R7 | Yageo | RC0603FR-0710KL | [C98220](https://www.lcsc.com/product-detail/C98220.html) |
| 1 | HLK-LD2410C-P mmWave Sensor | SM1 | HI-LINK | HLK-LD2410C-P | [C19723500](https://www.lcsc.com/product-detail/C19723500.html) |
| 2 | Test Point | SPK+, SPK- | N/A | N/A | N/A |
| 2 | Tactile Switch | SW1, SW2 | Hanxia | HX 3x4x2-2P-1.6N | [C49234124](https://www.lcsc.com/product-detail/C49234124.html) |
| 1 | ESP32-S3 Module | U1 | Espressif | ESP32-S3-WROOM-1-N16R2 | [C2913205](https://www.lcsc.com/product-detail/C2913205.html) |
| 1 | I2S Amplifier | U2 | Analog Devices / Maxim | MAX98357AETE+T | [C910544](https://www.lcsc.com/product-detail/C910544.html) |
| 1 | Environmental Sensor | U3 | Bosch | BME280 | [C92489](https://www.lcsc.com/product-detail/C92489.html) |
| 1 | 3.3V LDO Regulator | U4 | UMW | AMS1117-3.3 | [C347222](https://www.lcsc.com/product-detail/C347222.html) |
| 1 | USB Type-C Connector | USB1 | HANBO | MC-403L68-Z10 | [C47326496](https://www.lcsc.com/product-detail/C47326496.html) |