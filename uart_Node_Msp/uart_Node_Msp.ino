/*
NODE MCU D7 -> P1.2  MSP430G2553
         D8 -> P1.1

         UART Communication
*/
#include <SoftwareSerial.h>
SoftwareSerial mySerial(13, 15, false, 256);
 
//Mas informacion http://pdacontroles.com/
// More info http://pdacontrolen.com/
 
void setup()
{
// Open serial communications and wait for port to open:
Serial.begin(9600);
while (!Serial) {
; // wait for serial port to connect. Needed for Leonardo only
}
Serial.println("Connect! - Conexion ");
// set the data rate for the SoftwareSerial port
mySerial.begin(9600);
mySerial.println("Connect! - Conexion SOFTWARESERIAL");
}
 
void loop() // run over and over
{
if (mySerial.available())
Serial.write(mySerial.read());
if (Serial.available())
mySerial.write(Serial.read());
}
