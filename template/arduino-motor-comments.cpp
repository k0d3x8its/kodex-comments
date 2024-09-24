/**********************************************************************************                                   
* + Project: Name Of Project                                                      *
* + Version: 0.1.0                                                                *
* + Description: This is the part where you describe the project                  *
* + Board: Arduino Uno R3 | atmega328p                                            *
* + Sensor: N/A                                                                   *
* + Module: Arduino Motor Shield V1.2                                             *
* + Author: K0d3x 8its                                                            *
* + Date: Month Day, Year                                                         *
***********************************************************************************
  + Inspired by: Duckman | https://busyducks.com/ascii-art-arduino-pinouts/
  ++ Altered by: K0d3x   | https://github.com/k0d3x8its
***********************************************************************************
*                                                     +-----+      * Motor Shield *
*                    ____[PWR]________________________| USB |___   ****************
*                    |    [ ]                         +-----+  |   *   [ ]-|PWR   * 
*                    |         GND/RST2  [ ][ ]                |   *   [ ]-|GND   * 
*                    |       MOSI2/SCK2  [ ][ ]    A5/SCL|-[ ] |   *            * *
*                    |          5V/MISO2 [ ][ ]    A4/SDA|-[ ] |   *   [ ]-|M1  * 
*                    |                               AREF|-[ ] |   *   [ ]-|GND * 
*                    |                                GND|-[ ] |   *   [ ]-|M2  * 
*                    | [ ]-|N/C                   SCK/D13|-[ ] |   * ---------- +
*                    | [ ]-|IOREF                MISO/D12|-[ ] |   *   [ ]-|M3  *
*                    | [ ]-|RST                  MOSI/D11|-[ ]~|   *   [ ]-|GND *
*                    | [ ]-|3v3    +---+           SS/D10|-[ ]~|   *   [ ]-|M4  * *
*                    | [ ]-|5V    -| A |-              D9|-[ ]~|   ****************
*                    | [ ]-|GND   -| R |-     U        D8|-[ ] |   *  Servo Pins  *
*                    | [ ]-|GND   -| D |-     N                |   ****************
*                    | [ ]-|VIN   -| U |-     O        D7|-[ ] |   *   Servo 1    *
*                    |            -| I |-              D6|-[ ]~|   * ------------ +
*                    | [ ]-|A0    -| N |-     R        D5|-[ ]~|   *   [ ]-|GND ***
*                    | [ ]-|A1    -| O |-     3        D4|-[ ] |   *   [ ]-|PWR *
*                    | [ ]-|A2     +---+          INT1/D3|-[ ]~|   *   [ ]-|SIG ***
*                    | [ ]-|A3                    INT0/D2|-[ ] |   * ------------ +
*                    | [ ]-|A4/SDA  RST SCK MISO  TX-->D1|-[ ] |   *   Servo 2    *
*                    | [ ]-|A5/SCL  [ ] [ ] [ ]   RX<--D0|-[ ] |   * ------------ +
*                    |              [ ] [ ] [ ]                |   *   [ ]-|GND ***
*                    |              GND MOSI 5V  ______________/   *   [ ]-|PWR *
*                    \__________________________/                  *   [ ]-|SIG ***
* *********************************************************************************
         *****************   Arduino Uno R3 Overview    *****************  
***********************************************************************************
   **** https://docs.arduino.cc/resources/datasheets/A000066-datasheet.pdf ****
***********************************************************************************/

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}