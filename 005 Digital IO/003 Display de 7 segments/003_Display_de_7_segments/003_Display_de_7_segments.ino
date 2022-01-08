/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                           003 Display de 7 segments                           **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 28/12/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte segA = 5;                   // donar nom al pin 5 de l’Arduino
const byte segB = 6;                   // donar nom al pin 6 de l’Arduino
const byte segC = 7;                   // donar nom al pin 7 de l’Arduino
const byte segD = 8;                   // donar nom al pin 8 de l’Arduino
const byte segE = 9;                   // donar nom al pin 9 de l’Arduino
const byte segF = 10;                  // donar nom al pin 10 de l’Arduino
const byte segG = 11;                  // donar nom al pin 11 de l’Arduino
const byte buttonPin = 2;              // donar nom al pin 2 de l'Arduino

int comptador = 0;                     // definir variable contador igual a zero
int llegir;                            // definir variable contador igual a zero
int s=1;                               // definir variable contador igual a zero

//*********************************** SETUP ***************************************
void setup()                           // configura el final de la sortida
{
  pinMode(segA, OUTPUT);               // definir el pin 5 com una sortida
  pinMode(segB, OUTPUT);               // definir el pin 6 com una sortida
  pinMode(segC, OUTPUT);               // definir el pin 7 com una sortida
  pinMode(segD, OUTPUT);               // definir el pin 8 com una sortida
  pinMode(segE, OUTPUT);               // definir el pin 9 com una sortida
  pinMode(segF, OUTPUT);               // definir el pin 10 com una sortida
  pinMode(segG, OUTPUT);               // definir el pin 11 com una sortida
  pinMode(buttonPin, INPUT);           // definir el pin 2 com una entrada
}

//************************************ LOOP ***************************************
void loop()                            // inicia el bucle del programa
{

   llegir = digitalRead(buttonPin);
   
   if (llegir == HIGH)
   {
   comptador = comptador + s;
   
   if (comptador < 0) { s = 1;}
   
   if (comptador == 0) { zero();}
   if (comptador == 1) { un();}
   if (comptador == 2) { dos();} 
   if (comptador == 3) { tres();} 
   if (comptador == 4) { quatre();}  
   if (comptador == 5) { cinc();}  
   if (comptador == 6) { sis();}  
   if (comptador == 7) { set();}
   if (comptador == 8) { vuit();}
   if (comptador == 9) { nou();}
   }
     delay(500);
   }

   void borrar()
   {
   digitalWrite(segA, HIGH);            // posar a 5V el pin 5
   digitalWrite(segB, HIGH);            // posar a 5V el pin 6
   digitalWrite(segC, HIGH);            // posar a 5V el pin 7
   digitalWrite(segD, HIGH);            // posar a 5V el pin 8
   digitalWrite(segE, HIGH);            // posar a 5V el pin 9
   digitalWrite(segF, HIGH);            // posar a 5V el pin 10
   digitalWrite(segG, HIGH);            // posar a 5V el pin 11
   }

   void zero()
   {
   borrar();
   digitalWrite(segA, HIGH);            // posar a 5V el pin 5
   digitalWrite(segB, HIGH);            // posar a 5V el pin 6
   digitalWrite(segC, HIGH);            // posar a 5V el pin 7
   digitalWrite(segD, HIGH);            // posar a 5V el pin 8
   digitalWrite(segE, HIGH);            // posar a 5V el pin 9
   digitalWrite(segF, HIGH);            // posar a 5V el pin 10
   digitalWrite(segG, LOW);             // posar a 0V el pin 11
   }

   void un()
   {
   borrar();
   digitalWrite(segA, LOW);             // posar a 0V el pin 5
   digitalWrite(segB, HIGH);            // posar a 5V el pin 6
   digitalWrite(segC, HIGH);            // posar a 5V el pin 7
   digitalWrite(segD, LOW);             // posar a 0V el pin 8
   digitalWrite(segE, LOW);             // posar a 0V el pin 9
   digitalWrite(segF, LOW);             // posar a 0V el pin 10
   digitalWrite(segG, LOW);             // posar a 0V el pin 11
   }

   void dos()
   {
   borrar();  
   digitalWrite(segA, HIGH);            // posar a 5V el pin 5
   digitalWrite(segB, HIGH);            // posar a 5V el pin 6
   digitalWrite(segC, LOW);             // posar a 0V el pin 7
   digitalWrite(segD, HIGH);            // posar a 5V el pin 8
   digitalWrite(segE, HIGH);            // posar a 5V el pin 9
   digitalWrite(segF, LOW);             // posar a 0V el pin 10
   digitalWrite(segG, HIGH);            // posar a 5V el pin 11
   }

   void tres()
   {
   borrar();
   digitalWrite(segA, HIGH);            // posar a 5V el pin 5
   digitalWrite(segB, HIGH);            // posar a 5V el pin 6
   digitalWrite(segC, HIGH);            // posar a 5V el pin 7
   digitalWrite(segD, HIGH);            // posar a 5V el pin 8
   digitalWrite(segE, LOW);             // posar a 0V el pin 9
   digitalWrite(segF, LOW);             // posar a 0V el pin 10
   digitalWrite(segG, HIGH);            // posar a 5V el pin 11
   }

   void quatre()
   {
   borrar();
   digitalWrite(segA, LOW);             // posar a 0V el pin 5
   digitalWrite(segB, HIGH);            // posar a 5V el pin 6
   digitalWrite(segC, HIGH);            // posar a 5V el pin 7
   digitalWrite(segD, LOW);             // posar a 0V el pin 8
   digitalWrite(segE, LOW);             // posar a 0V el pin 9
   digitalWrite(segF, HIGH);            // posar a 5V el pin 10
   digitalWrite(segG, HIGH);            // posar a 5V el pin 11
   }

   void cinc()
   {
   borrar();
   digitalWrite(segA, HIGH);            // posar a 5V el pin 5
   digitalWrite(segB, LOW);             // posar a 0V el pin 6
   digitalWrite(segC, HIGH);            // posar a 5V el pin 7
   digitalWrite(segD, HIGH);            // posar a 5V el pin 8
   digitalWrite(segE, LOW);             // posar a 0V el pin 9
   digitalWrite(segF, HIGH);            // posar a 5V el pin 10
   digitalWrite(segG, HIGH);            // posar a 5V el pin 11
   }

   void sis()
   {
   borrar();
   digitalWrite(segA, LOW);             // posar a 0V el pin 5
   digitalWrite(segB, LOW);             // posar a 0V el pin 6
   digitalWrite(segC, HIGH);            // posar a 5V el pin 7
   digitalWrite(segD, HIGH);            // posar a 5V el pin 8
   digitalWrite(segE, HIGH);            // posar a 5V el pin 9
   digitalWrite(segF, HIGH);            // posar a 5V el pin 10
   digitalWrite(segG, HIGH);            // posar a 5V el pin 11
   }

   void set()
   {
   borrar();
   digitalWrite(segA, HIGH);            // posar a 5V el pin 5
   digitalWrite(segB, HIGH);            // posar a 5V el pin 6
   digitalWrite(segC, HIGH);            // posar a 5V el pin 7
   digitalWrite(segD, LOW);             // posar a 0V el pin 8
   digitalWrite(segE, LOW);             // posar a 0V el pin 9
   digitalWrite(segF, LOW);             // posar a 0V el pin 10
   digitalWrite(segG, LOW);             // posar a 0V el pin 11
   }

   void vuit()
   {
   borrar();
   digitalWrite(segA, HIGH);            // posar a 5V el pin 5
   digitalWrite(segB, HIGH);            // posar a 5V el pin 6
   digitalWrite(segC, HIGH);            // posar a 5V el pin 7
   digitalWrite(segD, HIGH);            // posar a 5V el pin 8
   digitalWrite(segE, HIGH);            // posar a 5V el pin 9
   digitalWrite(segF, HIGH);            // posar a 5V el pin 10
   digitalWrite(segG, HIGH);            // posar a 5V el pin 11
   }

   void nou()
   {
   borrar();
   digitalWrite(segA, HIGH);            // posar a 5V el pin 5
   digitalWrite(segB, HIGH);            // posar a 5V el pin 6
   digitalWrite(segC, HIGH);            // posar a 5V el pin 7
   digitalWrite(segD, LOW);             // posar a 0V el pin 8
   digitalWrite(segE, LOW);             // posar a 0V el pin 9
   digitalWrite(segF, HIGH);            // posar a 5V el pin 10
   digitalWrite(segG, HIGH);            // posar a 5V el pin 11
   }

//********************************** FUNCIONS *************************************
