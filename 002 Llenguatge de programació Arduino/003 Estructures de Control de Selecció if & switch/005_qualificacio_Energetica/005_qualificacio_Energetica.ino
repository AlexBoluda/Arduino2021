/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**               005 Estructura de Control de Selecció if & switch               **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 29/11/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
float qualificacioEnergetica = 16.16;

//*********************************** SETUP ***************************************
void setup()
{
  Serial.begin(9600);

  if (qualificacioEnergetica < 3.5)
  {
    Serial.print("A");
  } 

  else if (qualificacioEnergetica < 6.5)
  {
    Serial.print ("B");
  }

  else if (qualificacioEnergetica < 11.1)
  {
    Serial.print ("C");
  }

  else if (qualificacioEnergetica < 17.7)
  {
    Serial.print ("D");
  }

  else if (qualificacioEnergetica < 38.2)
  {
    Serial.print ("E");
  }

  else if (qualificacioEnergetica < 43.2)
  {
    Serial.print ("F");
  }

  else if (qualificacioEnergetica == 43.2)
  {
    Serial.print ("G");
  }

  else
  {
    Serial.print ("G");
  }
}

//************************************ LOOP ***************************************
void loop()
{
}

//********************************** FUNCIONS *************************************
