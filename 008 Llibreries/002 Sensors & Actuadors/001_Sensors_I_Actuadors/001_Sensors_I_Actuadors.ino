/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                            001 Sensors & Actuadors                            **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 19/01/2022 **
**********************************************************************************/

//*********************************** INCLUDE *************************************
#include <Servo.h>                         // incloure la biblioteca Servo
#include <LiquidCrystal.h>                 // incloure la llibreria LiquidCrystal per poder programar el LCD

//********************************** VARIABLES ************************************
     // ULTRASS
int TRIGGER = 13;                          // donar nom al pin 13 de l'Arduino
int ECHO = 12;                             // donar nom al pin 12 de l'Arduino

     // LiquidCrystal
LiquidCrystal LCD(2,3,8,9,10,11);          // definir els pins on connectarem els pins de dades

     // LED
const byte verd = 4;                       // donar nom al pin 4 de l'Arduino
const byte vermell = 5;                    // donar nom al pin 5 de l'Arduino

     // MicroServo
Servo MicroServo;                          // definir el Servo que utilitzaré

//*********************************** SETUP ***************************************
void setup()                               // configura el final de la sortida
{
     // ULTRASS
  pinMode(TRIGGER, OUTPUT);                // definir el pin 13 com a sortida de l'Arduino
  pinMode(ECHO, INPUT);                    // definir el pin 12 com a sortida de l'Arduino

     // LiquidCrystal
  LCD.begin(16,2);                         // indiquem que és una pantalla LCD de 16x2

     // LED
  pinMode(verd, OUTPUT);                   // definir el pin 4 com a sortida de l'Arduino
  pinMode(vermell, OUTPUT);                // definir el pin 5 com a sortida de l'Arduino

     // MicroServo
  MicroServo.attach(6);                    // definir el pin 6 com a sortida de l'Arduino
}

//************************************ LOOP ***************************************
void loop()                                // inicia el bucle del programa
{
  digitalWrite(TRIGGER, LOW);              // inicialitzem el pin amb 0
  delayMicroseconds(4);                    // delay de 4 microsegons
  digitalWrite(TRIGGER, HIGH);             // enviem un pols a TRIGGER
  delayMicroseconds(10);                   // delay de 10 microsegons
  digitalWrite(TRIGGER, LOW);              // posem TRIGGER a 0
  delayMicroseconds(6);                    // delay de 6 microsegons

  int temps = pulseIn(ECHO, HIGH);         // trobem l'amplada del pols
  int distancia = (temps * 0.034)/2;       // fem la relació de la distància (cm) segons el temps
  
  if (distancia < 20)
  {
    MicroServo.write(180);                 // donar valor (180°) al Servo
    digitalWrite(verd, HIGH);              // posar a 5V el pin 4 de l'Arduino
    digitalWrite(vermell, LOW);            // posar a 0V el pin 5 de l'Arduino

    LCD.clear();                           // iniciar amb la pantalla en blanc
    LCD.print("Object detected.");         // escriure en la pantalla LCD
    LCD.setCursor(0,1);                    // situar en el punt (0,1) el text
    LCD. print("Open the barrier!");       // escriure en la pantalla LCD
    delay(1000);                           // delay de 1000 mil·lisegons
  }
  
  else
  {
    MicroServo.write(90);                  // donar valor (90°) al Servo
    digitalWrite(verd, LOW);               // posar a 0V el pin 4 de l'Arduino
    digitalWrite(vermell, HIGH);           // posar a 5V el pin 5 de l'Arduino
    
    LCD.clear();                           // iniciar amb la pantalla en blanc
    LCD.print("No object detected.");      // escriure en la pantalla LCD
    LCD.setCursor(0,1);                    // situar en el punt (0,1) el text
    LCD.print("Close the barrier!");       // escriure en la pantalla LCD
    delay(1000);                           // delay de 1000 mil·lisegons
  }
}

//********************************** FUNCIONS *************************************
