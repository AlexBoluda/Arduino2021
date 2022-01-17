/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                                  001 Melodia                                  **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 17/01/2022 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
const byte speakerPin = 9;                                                          // pin for speaker
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
  pinMode(speakerPin, OUTPUT);                                                      // make the pin output
}

//************************************ LOOP ***************************************
void loop()
{
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
       delay(tempo / 2);                                                            // pause between notes
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
  
  for (int i = 0; i < 9; i++)                                                       // play the tone corresponding to the note name
  {
    if (names[i] == note)
    {
      playTone(tones[i], duration);
    }
  }
}
