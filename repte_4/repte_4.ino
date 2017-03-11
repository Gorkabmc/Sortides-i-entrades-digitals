/**********************************************************************************
**                                                                               **
**                     Repte 1. Array de 8 LEDs 4                                **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       11/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int LED5 = 5;
int LED6 = 6;
int LED7 = 7;
int LED8 = 8;
int B;
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);
  Serial.println("Entra numero !");
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

//********************************* LOOP ******************************************
void loop()
{
  while (Serial.available() > 0) {
    B = Serial.parseInt();
    if (Serial.read() == '\n') {
 if (B == 0)
 {
 }
  else if (B == 1)
  {
    digitalWrite(5, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    delay(1000);
  }
    else if (B == 2)
  {
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(6, LOW);
    delay(1000);
  }
      else if (B == 3)
  {
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(7, LOW);
    delay(1000);
  }
      else if (B == 4)
  {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);
  }
        else if (B == 5)
  {
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    digitalWrite(7, LOW);
    delay(1000);
  }
      }
  }
    }
    

  //******************************* FUNCIONS ****************************************
