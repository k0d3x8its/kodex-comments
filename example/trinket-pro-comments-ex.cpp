/********************************************************************************  
* + Project: Name Of Project                                                    *
* + Version: 0.1.0                                                              *
* + Description: This is the part where you describe the project                *
* + Board: Adafruit Trinket Pro 5V 16MHz FTDI | atmega328p                      *
* + Sensor: N/A                                                                 *
* + Module: Joystick                                                            *
* + Module: SG90 Micro Servo                                                    *
* + Author: K0d3x 8its                                                          *
* + Date: April 14, 2017                                                        *
* + License: Type                                                               *
*********************************************************************************
  + Inspired by: Duckman | https://busyducks.com/ascii-art-arduino-pinouts/
  + Designed by: K0d3x   | https://github.com/k0d3x8its
*********************************************************************************
*                              -------[       ]-------                          *
*       Servo X axis ===> [*]-|9 ~                BAT+|-[ ] = 5.5-16V           *
*       Servo Y axis ===> [*]-|10 ~                GND|-[*]                     *
*                         [ ]-|11 ~                BUS|-[ ] = USB 5V 500mA      *
*                         [ ]-|12                   5V|-[*] = 150mA             *
*                         [ ]-|13                   D8|-[ ]                     *
*                         [ ]-|AR                 ~ D6|-[ ]                     *
*    Joystick X axis ===> [*]-|A0 [ ]-|A6         ~ D5|-[ ]                     *
*    Joystick Y axis ===> [*]-|A1 [ ]-|A7           D4|-[ ]                     *
*                         [ ]-|A2        *        ~ D3|-[ ]                     *
*                         [ ]-|A3     adafruit      D1|-[ ] --> TX              *
*                   SDA = [ ]-|A4     Trinket       D0|-[ ] <-- RX              *
*                   SCL = [ ]-|A5       Pro        RST|-[ ] = RESET             *
*                              \_____FTDI Header_____/                          *
*                             [ ] [*] [*] [ ] [ ] [ ]                           *
*                             GND GND 5V  RX  TX  RST                           *
*********************************************************************************
      *****************   Adafruit Trinket Pro Overview    *****************  
*********************************************************************************
   ****** https://learn.adafruit.com/introducing-pro-trinket/overview ******
*********************************************************************************
*********************************************************************************
      *****************    SG90 Micro Servo Datasheet      *****************  
*********************************************************************************
  ***** https://www.datasheetspdf.com/pdf-down/S/G/9/SG90-TowerPro.pdf *****
********************************************************************************/

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}