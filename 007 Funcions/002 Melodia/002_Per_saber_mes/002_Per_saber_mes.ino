/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                            007 002 Per saber-ne més                           **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 17/01/2022 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte d0 = 2;                                                                  //define pin 2 of the Arduino
const byte re = 3;                                                                  //define pin 3 of the Arduino
const byte mi = 4;                                                                  //define pin 4 of the Arduino
const byte fa = 5;                                                                  //define pin 5 of the Arduino
const byte sol = 6;                                                                 //define pin 6 of the Arduino
const byte la = 7;                                                                  //define pin 7 of the Arduino
const byte si = 8;                                                                  //define pin 8 of the Arduino
const byte d0sos = 10;                                                              //define pin 10 of the Arduino
const byte resos = 11;                                                              //define pin 11 of the Arduino
const byte speakerPin = 9;                                                          // pin for speaker
#define R  0
#define L  1
int r;
int l;
int tempo = 300;                                                                    // define a time in ms

// Melody 1
// int length = 15;                                                                 // the number of notes
// char notes[] = "ccggaagffeeddc ";                                                // a space represents a rest
// int beats[] = { 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 2, 4 };                   // time notes

// Melody 2 - Himne del Barça
// int length = 21;                                                                 // the number of notes
// char notes[] = "egC egC egCDCb abCabg";                                          // a space represents a rest
// int beats[]={3, 2, 2, 1, 3, 2, 2, 1, 2, 1, 2, 2, 1, 3, 1, 2, 1, 1, 1, 1, 3, 1};  // time notes

// Melody 3 - Jingle Bells
int length = 62;                                                                    // the number of notes
char notes[] = "eee eee egcde fff ffee eeeddedg eee eee egcde ffff feeee ggfdc";    // a space represents a rest
int beats[] = {1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1,    // time notes
1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 
1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4};

//*********************************** SETUP ***************************************
void setup()
{
  pinMode(d0, OUTPUT);                                                              //define pin 2 as output of the Arduino
  pinMode(re, OUTPUT);                                                              //define pin 3 as output of the Arduino
  pinMode(mi, OUTPUT);                                                              //define pin 4 as output of the Arduino
  pinMode(fa, OUTPUT);                                                              //define pin 5 as output of the Arduino
  pinMode(sol, OUTPUT);                                                             //define pin 6 as output of the Arduino
  pinMode(la, OUTPUT);                                                              //define pin 7 as output of the Arduino
  pinMode(si, OUTPUT);                                                              //define pin 8 as output of the Arduino
  pinMode(d0sos, OUTPUT);                                                           //define pin 10 as output of the Arduino
  pinMode(resos, OUTPUT);                                                           //define pin 11 as output of the Arduino
  pinMode(speakerPin, OUTPUT);                                                      // make the pin output
}

//************************************ LOOP ***************************************
void loop()
{
  r = analogRead(R);
  l = analogRead(L);
  
  for (int i = 0; i < length; i++)
   {
     if (notes[i] == ' ')
     {
       delay(beats[i] * tempo);
     } 
     else
     {
       playNote(notes[i], beats[i] * tempo);
     }
       delay(tempo / 2);                                                             // pause between notes
   }
  
  if (d0 == 'c')
  {
    digitalWrite(d0, HIGH);                                                          // posar a 5V el pin 2 de l'Arduino
  }
  
  else if (re == 'd')
  {
    digitalWrite(re, HIGH);                                                          // posar a 5V el pin 3 de l'Arduino
  }
  
  else if (mi == 'e')
  {
    digitalWrite(mi, HIGH);                                                          // posar a 5V el pin 4 de l'Arduino
  }
  
  else if (fa == 'f')
  {
    digitalWrite(fa, HIGH);                                                          // posar a 5V el pin 5 de l'Arduino
  }
  
  else if (sol == 'g')
  {
    digitalWrite(sol, HIGH);                                                         // posar a 5V el pin 6 de l'Arduino
  }
  
  else if (la == 'a')
  {
    digitalWrite(la, HIGH);                                                          // posar a 5V el pin 7 de l'Arduino
  }
  
  else if (si == 'b')
  {
    digitalWrite(si, HIGH);                                                          // posar a 5V el pin 8 de l'Arduino
  }
  
  else if (d0sos == 'C')
  {
    digitalWrite(d0sos, HIGH);                                                       // posar a 5V el pin 10 de l'Arduino
  }
  
  else if (resos == 'D')
  {
    digitalWrite(resos, HIGH);                                                       // posar a 5V el pin 11 de l'Arduino
  }

  else
  {
    digitalWrite(d0, LOW);                                                           // posar a 0V el pin 2 de l'Arduino
    digitalWrite(re, LOW);                                                           // posar a 0V el pin 3 de l'Arduino
    digitalWrite(mi, LOW);                                                           // posar a 0V el pin 4 de l'Arduino
    digitalWrite(fa, LOW);                                                           // posar a 0V el pin 5 de l'Arduino
    digitalWrite(sol, LOW);                                                          // posar a 0V el pin 6 de l'Arduino
    digitalWrite(la, LOW);                                                           // posar a 0V el pin 7 de l'Arduino
    digitalWrite(si, LOW);                                                           // posar a 0V el pin 8 de l'Arduino
    digitalWrite(d0sos, LOW);                                                        // posar a 0V el pin 10 de l'Arduino
    digitalWrite(resos, LOW);                                                        // posar a 0V el pin 11 de l'Arduino
  }
}

//********************************** FUNCIONS *************************************
void playTone(int tone, int duration)
{
  for (long i = 0; i < duration * 1000L; i += tone * 2)
  {
     digitalWrite(speakerPin, HIGH);
     delayMicroseconds(tone);
     digitalWrite(speakerPin, LOW);
     delayMicroseconds(tone);
  }
}

void playNote(char note, int duration)
{
  char names[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' , 'D'};
  int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956, 840};
  
  for (int i = 0; i < 9; i++)                                                        // play the tone corresponding to the note name
  {
    if (names[i] == note)
    {
      playTone(tones[i], duration);
    }
  }
}
