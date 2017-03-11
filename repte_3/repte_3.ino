/**********************************************************************************
**                                                                               **
**                     Repte 1. Array de 8 LEDs 3                                **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       11/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int LED5 = 5;
int LED6 = 6;
int LED7 = 7;
int LED8 = 8;
int LED9 = 9;
int LED10 = 10;
int LED11 = 11;
int LED12 = 12;
//******************************** SETUP ******************************************
void setup()
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

//********************************* LOOP ******************************************
void loop()
{
  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  delay(50);

  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);

  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  delay(50);

  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(8, LOW);
  delay(50);

  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);

  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);

  digitalWrite(11, HIGH);
  delay(50);
  digitalWrite(11, LOW);
  delay(50);

  digitalWrite(12, HIGH);
  delay(50);
  digitalWrite(12, LOW);
  delay(50);

  digitalWrite(11, HIGH);
  delay(50);
  digitalWrite(11, LOW);
  delay(50);

  digitalWrite(10, HIGH);
  delay(50);
  digitalWrite(10, LOW);
  delay(50);

  digitalWrite(9, HIGH);
  delay(50);
  digitalWrite(9, LOW);
  delay(50);

  digitalWrite(8, HIGH);
  delay(50);
  digitalWrite(8, LOW);
  delay(50);

  digitalWrite(7, HIGH);
  delay(50);
  digitalWrite(7, LOW);
  delay(50);

  digitalWrite(6, HIGH);
  delay(50);
  digitalWrite(6, LOW);
  delay(50);

  digitalWrite(5, HIGH);
  delay(50);
  digitalWrite(5, LOW);
  delay(50);

  digitalWrite(8 Y 10, HIGH);
  delay(80);
  digitalWrite(8 Y 10, LOW);
  delay(80);

  digitalWrite(7 , HIGH);
  delay(80);
  digitalWrite(7 , LOW);
  delay(80);

    digitalWrite(6, HIGH);
  delay(80);
  digitalWrite(6, LOW);
  delay(80);

  digitalWrite(5, HIGH);
  delay(80);
  digitalWrite(5, LOW);
  delay(80);
}

//******************************* FUNCIONS ****************************************
