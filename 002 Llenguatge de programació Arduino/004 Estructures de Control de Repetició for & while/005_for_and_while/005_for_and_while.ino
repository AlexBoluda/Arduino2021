/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**              004 Estructures de Control de Repetició for & while              **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 03/12/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
int taula2 = 2;
int taula3 = 3;
int taula4 = 4;
int taula5 = 5;
int taula6 = 6;
int taula7 = 7;
int taula8 = 8;
int taula9 = 9;
int taula10 = 10;

//*********************************** SETUP ***************************************
void setup()
{
  Serial.begin(9600);

  // Taula de multiplicar del 2
  
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula2);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula2);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula2*i);    
  }

  Serial.println(" ");

  // Taula de multiplicar del 3
  
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula3);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula3);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula3*i);    
  }

  Serial.println(" ");

  // Taula de multiplicar del 4
  
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula4);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula4);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula4*i);    
  }

  Serial.println(" ");

  // Taula de multiplicar del 5
  
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula5);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula5);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula5*i);    
  }

  Serial.println(" ");

  // Taula de multiplicar del 6
  
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula6);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula6);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula6*i);    
  }

  Serial.println(" ");

  // Taula de multiplicar del 7
  
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula7);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula7);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula7*i);    
  }

  Serial.println(" ");

  // Taula de multiplicar del 8
  
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula8);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula8);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula8*i);    
  }

  Serial.println(" ");

  // Taula de multiplicar del 9
  
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula9);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula9);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula9*i);    
  }

  Serial.println(" ");

  // Taula de multiplicar del 10
  
  Serial.print("Taula de multiplicar del ");
  Serial.println(taula10);
  for (int i=0; i <= 10; i++)
  {
    delay(100);
    Serial.print(taula10);
    Serial.print(" x ");
    Serial.print(i);
    Serial.print( " = ");
    Serial.println(taula10*i);    
  }
}

//************************************ LOOP ***************************************
void loop()
{
}

//********************************** FUNCIONS *************************************
