


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
int Olpdpro=0; //Lampada do projetor - pin 12
int Oalmsrn=0; //Sirene - pin 13




void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(57600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(4800);
  mySerial.println("Hello, world?");



pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(4, INPUT);
pinMode(5, INPUT);
pinMode(6, INPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(12, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() { // run over and over
 
  Ibtnptn=digitalRead(2);
  Ibtnpta=digitalRead(3);
  Ibtnpia=digitalRead(4);
  Isnspts=digitalRead(5);
  
  If Ibtnpta=1 
  {
   If( 
  }
  
  If Ibtnpts=1
  {
    
  }
  
  If Ibtnpia=1
  {
    
  }
  
  
  
  
  
  if (mySerial.available()) {
    Serial.write(mySerial.read());
  }
  if (Serial.available()) {
    mySerial.write(Serial.read());
  }
}
