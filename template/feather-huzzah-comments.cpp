/******************************************************************************
* + Project: Name Of Project                                                  *
* + Version: 0.1.0                                                            *
* + Description: This is the part where you describe the project              *
* + Board: Feather Huzzah ESP8266                                             *
* + Sensor: N/A                                                               *
* + Module: N/A                                                               *
* + Author: K0d3x 8its                                                        *
* + Date: Month Day, Year                                                     *
* + License: Type                                                             *
*******************************************************************************
  + Inspired by: Duckman | https://busyducks.com/ascii-art-arduino-pinouts/
  + Designed by: K0d3x   | https://github.com/k0d3x8its
*******************************************************************************
*                           ----[      ]-----             * VUSB = VIN | 5VDC *
*                      [ ]-|RST          ____|            *********************
*   MAX output 400mA = [ ]-|3V3         | __ |                                *
*                      [ ]-|NC          | __ |-[ ] = 3.7V Battery             *
*                      [ ]-|GND         |____|                                *
*                ADC = [ ]-|A0            BAT|-[ ] = LiPo                     **************
*                      [ ]-|NC             EN|-[ ] = connect GND to disable 3.3V regulator *
*                      [ ]-|NC           VUSB|-[ ] = VBUS                     * ************
*                      [ ]-|NC          ~ D14|-[ ] = SCK                      * 
*                      [ ]-|NC          ~ D12|-[ ] = MISO                     * 
*                      [ ]-|NC          ~ D13|-[ ] = MOSI                     * 
*                SCK = [ ]-|D14 ~  *    ~ D15|-[ ]                            *
*             ~ MOSI = [ ]-|D13  Feather ~ D0|-[ ] = Board LED/Bootloader     * 
*             ~ MISO = [ ]-|D12  Huzzah ~ D16|-[ ] = WAKE                     *
*                RX--> [ ]-|D3 ~         ~ D2|-[ ]                            * 
*                TX <--[ ]-|D1 ~         ~ D5|-[ ] = SCL                      * 
*                 EN = [ ]-|CHPD         ~ D4|-[ ] = SDA                      * 
*                           \_______________/                                 *                           
*                                                                             *                               
*******************************************************************************
    ******************     Feather Huzzah Overview      ******************  
*******************************************************************************
   ****** https://learn.adafruit.com/adafruit-feather-huzzah-esp8266 ******
*******************************************************************************
*******************************************************************************
         ******************  Example Datasheet  ******************
*******************************************************************************
               *** https://www.website.com/path/to/datasheet ***
******************************************************************************/

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}