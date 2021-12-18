/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                             Digital I/O Comunicar                             **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 17/12/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
byte buttonState = 0;         // donar valor al buttonState de l'Arduino
byte buttonState2 = 0;        // donar valor al buttonState2 de l'Arduino
const byte led0 = 5;          // donar nom al pin 5 de l’Arduino
const byte led1 = 6;          // donar nom al pin 6 de l’Arduino
const byte led2 = 7;          // donar nom al pin 7 de l’Arduino
const byte led3 = 8;          // donar nom al pin 8 de l’Arduino
const byte led4 = 9;          // donar nom al pin 9 de l’Arduino
const byte led5 = 10;         // donar nom al pin 10 de l’Arduino
const byte led6 = 11;         // donar nom al pin 11 de l’Arduino
const byte led7 = 12;         // donar nom al pin 12 de l’Arduino
const byte Reb = A1;          // donar nom al pin A1 de l'Arduino
const byte Dona = A0;         // donar nom al pin A0 de l'Arduino
const byte Interruptor = A2;  // donar nom al pin A2 de l'Arduino
unsigned long temps = 500;    // donar valor al temps (variable - unsigned long)

//*********************************** SETUP ***************************************
void setup()                          // configura el final de la sortida
{
  pinMode(led0, OUTPUT);          // definir el pin 5 com una sortida
  pinMode(led1, OUTPUT);          // definir el pin 6 com una sortida
  pinMode(led2, OUTPUT);          // definir el pin 7 com una sortida
  pinMode(led3, OUTPUT);          // definir el pin 8 com una sortida
  pinMode(led4, OUTPUT);          // definir el pin 9 com una sortida
  pinMode(led5, OUTPUT);          // definir el pin 10 com una sortida
  pinMode(led6, OUTPUT);          // definir el pin 11 com una sortida
  pinMode(led7, OUTPUT);          // definir el pin 12 com una sortida
  pinMode(Reb, INPUT);            // definir el pin A1 com una entrada
  pinMode(Dona, OUTPUT);          // definir el pin A0 com una sortida
  pinMode(Interruptor, INPUT);    // definir el pin A2 com una entrada
  digitalWrite(Dona, LOW);        // posar a 0V el pin A0
}

//************************************ LOOP ***************************************
void loop()                                   // inicia el bucle del programa
{
  
  buttonState2 = digitalRead(Reb);
  buttonState = digitalRead(Interruptor);
  
  if (buttonState == 1 | buttonState2 == 1)
  {
    digitalWrite(led0, HIGH);   // posar a 5V el pin 5
    digitalWrite(led1, LOW);    // posar a 0V el pin 6
    digitalWrite(led2, LOW);    // posar a 0V el pin 7
    digitalWrite(led3, LOW);    // posar a 0V el pin 8
    digitalWrite(led4, LOW);    // posar a 0V el pin 9
    digitalWrite(led5, LOW);    // posar a 0V el pin 10
    digitalWrite(led6, LOW);    // posar a 0V el pin 11
    digitalWrite(led7, LOW);    // posar a 0V el pin 12
   
    delay(temps);
   
    digitalWrite(led0, LOW);    // posar a 0V el pin 5
    digitalWrite(led1, HIGH);   // posar a 5V el pin 6
    digitalWrite(led2, LOW);    // posar a 0V el pin 7
    digitalWrite(led3, LOW);    // posar a 0V el pin 8
    digitalWrite(led4, LOW);    // posar a 0V el pin 9
    digitalWrite(led5, LOW);    // posar a 0V el pin 10
    digitalWrite(led6, LOW);    // posar a 0V el pin 11
    digitalWrite(led7, LOW);    // posar a 0V el pin 12
   
   
    delay(temps);
 
    digitalWrite(led0, LOW);    // posar a 0V el pin 5
    digitalWrite(led1, LOW);    // posar a 0V el pin 6
    digitalWrite(led2, HIGH);   // posar a 5V el pin 7
    digitalWrite(led3, LOW);    // posar a 0V el pin 8
    digitalWrite(led4, LOW);    // posar a 0V el pin 9
    digitalWrite(led5, LOW);    // posar a 0V el pin 10
    digitalWrite(led6, LOW);    // posar a 0V el pin 11
    digitalWrite(led7, LOW);    // posar a 0V el pin 12
 
    delay(temps);
 
   
    digitalWrite(led0, LOW);    // posar a 0V el pin 5
    digitalWrite(led1, LOW);    // posar a 0V el pin 6
    digitalWrite(led2, LOW);    // posar a 0V el pin 7
    digitalWrite(led3, HIGH);   // posar a 5V el pin 8
    digitalWrite(led4, LOW);    // posar a 0V el pin 9
    digitalWrite(led5, LOW);    // posar a 0V el pin 10
    digitalWrite(led6, LOW);    // posar a 0V el pin 11
    digitalWrite(led7, LOW);    // posar a 0V el pin 12
 
 
    delay(temps);
 
    digitalWrite(led0, LOW);    // posar a 0V el pin 5
    digitalWrite(led1, LOW);    // posar a 0V el pin 6
    digitalWrite(led2, LOW);    // posar a 0V el pin 7
    digitalWrite(led3, LOW);    // posar a 0V el pin 8
    digitalWrite(led4, HIGH);   // posar a 5V el pin 9
    digitalWrite(led5, LOW);    // posar a 0V el pin 10
    digitalWrite(led6, LOW);    // posar a 0V el pin 11
    digitalWrite(led7, LOW);    // posar a 0V el pin 12
 
    delay(temps);
 
     
    digitalWrite(led0, LOW);    // posar a 0V el pin 5
    digitalWrite(led1, LOW);    // posar a 0V el pin 6
    digitalWrite(led2, LOW);    // posar a 0V el pin 7
    digitalWrite(led3, LOW);    // posar a 0V el pin 8
    digitalWrite(led4, LOW);    // posar a 0V el pin 9
    digitalWrite(led5, HIGH);   // posar a 5V el pin 10
    digitalWrite(led6, LOW);    // posar a 0V el pin 11
    digitalWrite(led7, LOW);    // posar a 0V el pin 12
 
    delay(temps);
 
    digitalWrite(led0, LOW);    // posar a 0V el pin 5
    digitalWrite(led1, LOW);    // posar a 0V el pin 6
    digitalWrite(led2, LOW);    // posar a 0V el pin 7
    digitalWrite(led3, LOW);    // posar a 0V el pin 8
    digitalWrite(led4, LOW);    // posar a 0V el pin 9
    digitalWrite(led5, LOW);    // posar a 0V el pin 10
    digitalWrite(led6, HIGH);   // posar a 5V el pin 11
    digitalWrite(led7, LOW);    // posar a 0V el pin 12
 
 
    delay(temps);
 
   
    digitalWrite(led0, LOW);    // posar a 0V el pin 5
    digitalWrite(led1, LOW);    // posar a 0V el pin 6
    digitalWrite(led2, LOW);    // posar a 0V el pin 7
    digitalWrite(led3, LOW);    // posar a 0V el pin 8
    digitalWrite(led4, LOW);    // posar a 0V el pin 9
    digitalWrite(led5, LOW);    // posar a 0V el pin 10
    digitalWrite(led6, LOW);    // posar a 0V el pin 11
    digitalWrite(led7, HIGH);   // posar a 5V el pin 12
 
 
    delay(temps);

    digitalWrite(led0, LOW);    // posar a 0V el pin 5
    digitalWrite(led1, LOW);    // posar a 0V el pin 6
    digitalWrite(led2, LOW);    // posar a 0V el pin 7
    digitalWrite(led3, LOW);    // posar a 0V el pin 8
    digitalWrite(led4, LOW);    // posar a 0V el pin 9
    digitalWrite(led5, LOW);    // posar a 0V el pin 10
    digitalWrite(led6, LOW);    // posar a 0V el pin 11
    digitalWrite(led7, LOW);    // posar a 0V el pin 12
 
 
    delay(temps);

    digitalWrite(Dona, HIGH);     // posar a 5V el pin A0
    delay(temps);
    digitalWrite(Dona, LOW);      // posar a 0V el pin A0
  }
}

//********************************** FUNCIONS *************************************
