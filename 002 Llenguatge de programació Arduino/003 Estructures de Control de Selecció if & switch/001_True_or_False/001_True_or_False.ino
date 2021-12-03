/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**               001 Estructura de Control de Selecció if & switch               **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 29/11/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
int T  =  9;
int Y  =  4;
int K  =  8;
int N  =  3;
int P  = - 3;
boolean Z  = true;
boolean W = false;
boolean A  =  false;
boolean B  =  true;

//*********************************** SETUP ***************************************
void setup()
{
  Serial.begin(9600);
  
  Serial.print("Afirmació 1: "); 
   Serial.println(T > 10 && T < 14);
  Serial.print("Afirmació 2: ");
   Serial.println(Y > 4 || Y < 7);
  Serial.print("Afirmació 3: ");
   Serial.println(K > 8 && K < 10);
  Serial.print("Afirmació 4: ");
   Serial.println(N > 2 || N < 20);
  Serial.print("Afirmació 5: ");
   Serial.println(P > 0 && P < -3);
  Serial.print("Afirmació 6: ");
   Serial.println(T > 10 || Z);
  Serial.print("Afirmació 7: ");
   Serial.println(P > 0 && B);
  Serial.print("Afirmació 8: ");
   Serial.println(W && B);
  Serial.print("Afirmació 9: ");
   Serial.println(W && A);
}

//************************************ LOOP ***************************************
void loop()
{
}

//********************************** FUNCIONS *************************************
