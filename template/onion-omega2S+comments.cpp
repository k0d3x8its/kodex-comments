/*******************************************************************************   
* + Project: Name Of Project                                                   *
* + Version: 0.1.0                                                             *    
* + Description: This is the part where you describe the project               *
* + Board: Onion Omega 2S+                                                      *
* + Sensor: N/A                                                                *
* + Module: N/A                                                                *
* + Author: K0d3x 8its                                                         *
* + Date: Month Day, Year                                                      *
* + License: Type                                                              *
********************************************************************************
  + Inspired by: Duckman | https://busyducks.com/ascii-art-arduino-pinouts/
  + Designed by: K0d3x   | https://github.com/k0d3x8its
********************************************************************************
*                     -------[       ]-------                                  *
*                    |                        \                                *
*                    |                   {o}   \ -[ ] = Antenna                *
*                [ ]-|GND                    GND|-[ ] =                        *
*                [ ]-|11                O    3V3|-[ ] = VIN                    *
*    CLK = I2S = [ ]-|3                 N    USB|-[ ] = D+                     *
*     WS = I2S = [ ]-|2                 I    USB|-[ ] = D-                     *
*                [ ]-|17                O     13|-[ ] <--RX0                   *
*                [ ]-|16                N     12|-[ ]--> TX0                   *
*                [ ]-|15                      38|-[ ] = FW RST                 * 
*         RX1--> [ ]-|46                O    3V3|-[ ] = VOUT                   *
*         TX1 <--[ ]-|45                M    ETH|-[ ]--> TX-                   *
*   MISO = SPI = [ ]-|9                 E    ETH|-[ ]--> TX+                   *
*   MOSI = SPI = [ ]-|8                 G    ETH|-[ ] <--RX-                   *
*    CLK = SPI = [ ]-|7                 A    ETH|-[ ] <--RX+                   * 
*    CS1 = SPI = [ ]-|6                 2     18|-[ ]                          *
*    SDO = I2S = [ ]-|1                 S     19|-[ ]                          *
*    SDI = I2S = [ ]-|0                 +      4|-[ ] = I2C = SCL              *
*                [ ]-|RST                      5|-[ ] = I2C = SDA              *
*                     \________________________/                               * 
********************************************************************************
 *****************   Onion Omega 2+ Documentation    *****************  
********************************************************************************
        ********** https://docs.onion.io/omega2-docs/ **********
********************************************************************************
********************************************************************************
    ********************    Example Datasheet      *********************  
********************************************************************************
         ***** https://www.website.com/path/to/datasheet *****
*******************************************************************************/
