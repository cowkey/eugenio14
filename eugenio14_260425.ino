/*
  Software serial multple serial test

 Receives from the hardware serial, sends to software serial.
 Receives from software serial, sends to hardware serial.

 The circuit:
 * RX is digital pin 10 (connect to TX of other device)
 * TX is digital pin 11 (connect to RX of other device)

 Note:
 Not all pins on the Mega and Mega 2560 support change interrupts,
 so only the following can be used for RX:
 10, 11, 12, 13, 50, 51, 52, 53, 62, 63, 64, 65, 66, 67, 68, 69

 Not all pins on the Leonardo and Micro support change interrupts,
 so only the following can be used for RX:
 8, 9, 10, 11, 14 (MISO), 15 (SCK), 16 (MOSI).

 created back in the mists of time
 modified 25 May 2012
 by Tom Igoe
 based on Mikal Hart's example

 This example code is in the public domain.

 */
#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

//Entradas digitais
int Ibtnptn=0;  //Interruptor do portão - pin 2
int Ibtnpta=0; //Interruptor da porta - pin 3
int Ibtnpia=0; //Interruptor da Pia - pin 4
int Isnspts=0; //Sensor de portões fechados - pin 5
int Irsvrsv=0; // reserva - pin 6

//Saídas digitais
int Olpdpri=0; //Lampada aárea comum principal - pin 7
int Olpdsec=0; //Lampada área comum secundária - pin 8
int Olpdcor=0; //Lampada do corredor da garagem - pin 9
int Olpdpro=0; //Lampada do projetor - pin 10
int Oalmsrn=0; //Sirene - pin 11





void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(57600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
PinMode(2,INPUT);
PinMode(3,INPUT);
PinMode(4,INPUT);
PinMode(5,INPUT);
PinMode(6,INPUT);
PinMode(7,OUTPUT);
PinMode(8,OUTPUT);
PinMode90,OUTPUT);
PinMode(10,OUTPUT);
PinMode(11,OUTPUT);

  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(4800);
  mySerial.println("Hello, world?");
}

void loop() { // run over and over
 
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
