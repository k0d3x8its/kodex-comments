/******************************************************************************
* + Project: Name Of Project                                                  *
* + Version: 0.1.0                                                            *
* + Description: This is the part where you describe the project              *
* + Board: Particle Argon                                                     *
* + Sensor: DHT22/AM2302                                                      *
* + Module: N/A                                                               *
* + Author: K0d3x 8its                                                        *
* + Date: March 22, 2020                                                      *
* + License: Type                                                             *
*******************************************************************************
  + Inspired by: Duckman | https://busyducks.com/ascii-art-arduino-pinouts/
  + Designed by: K0d3x   | https://github.com/k0d3x8its
*******************************************************************************
*                           -----[      ]-----            * VUSB = VIN | 5VDC *  
*                       [ ]-|RST         ____|            *********************  
*   3.3VDC/1000mA MAX = [ ]-|3V3        | __ |                                *
*                       [ ]-|MODE       | __ |-[ ] = 3.7V Battery             *
*     DHT22 Ground <=== [*]-|GND        |____|                                * 
*     ~ DHT22 Data <=== [*]-|A0           Li+|-[ ] = Connect To LiPo+ Pin     * 
*                 D18 = [ ]-|A1 ~          EN|-[ ]                            * 
*                 D17 = [ ]-|A2 ~        VUSB|-[*] ===> DHT22 Power           * 
*                 D16 = [ ]-|A3 ~        ~ D8|-[ ]                            * 
*                 D15 = [ ]-|A4 ~        ~ D7|-[ ] ===> On Board LED          *    
*          SPI =  D14 = [ ]-|A5 ~        ~ D6|-[ ]                            *    
*          SPI =  SCK = [ ]-|D13         ~ D5|-[ ]                            * 
*          SPI = MOSI = [ ]-|D12    *    ~ D4|-[ ] = MISO = SPI1              * 
*          SPI = MISO = [ ]-|D11  Argon  ~ D3|-[ ] = MOSI = SPI1/UART1 = SCL1 *
*        UART1 =  RX--> [ ]-|D10         ~ D2|-[ ] = SCK  = SPI1/UART1 = SDA1 *
*        UART1 =  TX <--[ ]-|D9            D1|-[ ] = SCL                      *
*                       [ ]-|NC            D0|-[ ] = SDA                      *
*                            \______________/                                 *                  
*******************************************************************************
       ******************     Argon Datasheet      ******************  
*******************************************************************************
 ******* https://docs.particle.io/datasheets/wi-fi/argon-datasheet/ *********
*******************************************************************************
*******************************************************************************
      ******************      DHT22 Datasheet      ******************  
*******************************************************************************
  *** https://www.sparkfun.com/datasheets/Sensors/Temperature/DHT22.pdf ***
******************************************************************************/
  
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
