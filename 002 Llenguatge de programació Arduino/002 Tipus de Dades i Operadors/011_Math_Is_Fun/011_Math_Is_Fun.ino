/**********************************************************************************
**                                                                               **
**                                     TÍTOL:                                    **
**                                011 Math Is Fun                                **
**                                                                               **
**  NOM: Àlex Boluda Pérez                                      DATA: 26/11/2021 **
**********************************************************************************/

//*********************************** INCLUDE *************************************

//********************************** VARIABLES ************************************
int drive_gb = 100;
long drive_mb = 102400, drive_kb = 104857600, real_drive_mb = 1000000, real_drive_kb = 1000000000, missing_drive_kb = 4857600;

//*********************************** SETUP ***************************************
void setup()
{
  Serial.begin(9600);
  
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");
  
  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");

  Serial.print("But it really only stores ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");

  Serial.print("You are missing ");
  Serial.print(missing_drive_kb);
  Serial.println(" Kilobytes!");
}

//************************************ LOOP ***************************************
void loop()
{
}

//********************************** FUNCIONS *************************************
