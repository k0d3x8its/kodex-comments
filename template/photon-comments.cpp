/**************************************************************************
* + Project:Name Of Project                                               *
* + Version: 0.1.0                                                        *
* + Description: This is the part where you describe the project          *
* + Board: Particle Photon                                                *
* + Sensor: N/A                                                           *
* + Module: N/A                                                           *
* + Author: K0d3x 8its                                                    *
* + Date: Month Day, Year                                                 *
* + License: Type                                                         *
***************************************************************************
  + Inspired by: Duckman | https://busyducks.com/ascii-art-arduino-pinouts/
  + Designed by: K0d3x   | https://github.com/k0d3x8its
***************************************************************************
*                       -----[      ]-----                                * 
*               VCC [ ]-|VIN          3V3|-[ ]                            *
*                   [ ]-|GND          RST|-[ ]                            *
*                <--[ ]-|TX          VBAT|-[ ]                            *
*                -->[ ]-|RX           GND|-[ ]                            *
*             WKP = [ ]-|A7            D7|-[ ] = On board LED             *
*             DAC = [ ]-|A6            D6|-[ ]                            *
*      MOSI = SPI = [ ]-|A5            D5|-[ ] = SPI = SS                 *
*      MISO = SPI = [ ]-|A4     *      D4|-[ ] = SPI = SCK                *
*       SCK = SPI = [ ]-|A3   Photon   D3|-[ ] = SPI = MISO               *
*        SS = SPI = [ ]-|A2            D2|-[ ] = SPI = MOSI               * 
*                   [ ]-|A1            D1|-[ ] = SCL                      *
*                   [ ]-|A0            D0|-[ ] = SDA                      *
*                        \______________/                                 *    
*                                                                         *     
***************************************************************************
    ******************     Photon Datasheet      ******************  
***************************************************************************
 * https://docs.particle.io/reference/datasheets/wi-fi/photon-datasheet/ *
***************************************************************************
    ******************      DHT22 Datasheet      ******************  
***************************************************************************
    ********** https://www.website.com/path/to/datasheet **********
**************************************************************************/