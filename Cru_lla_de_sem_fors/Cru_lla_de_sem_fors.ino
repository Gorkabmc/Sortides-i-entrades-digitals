/**********************************************************************************
**                                                                               **
**                         Repte 2. Cruïlla de semàfors                          **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       13/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
const int ledPin = 13; // ledPin al 13
int estat1, estat2 = 2;   // 0:Verd, 1:Tronja, 2:Vermell
 
//******************************** SETUP ******************************************
void setup() {
  // initialize serial: 
  Serial.begin(9600);
  // make the pins outputs:
  pinMode(ledPin, OUTPUT); 
}

//********************************* LOOP ******************************************
void loop() {
  estat1 = 0;
  estat2 = 2;
  Serial.write(estat1);
  Serial.write(estat2);
  delay(2000);
  estat1 = 1;
  estat2 = 2;
  Serial.write(estat1);
  Serial.write(estat2);
  delay(1000);
  estat1 = 2;
  estat2 = 2;
  Serial.write(estat1);
  Serial.write(estat2);
  delay(500);
  estat1 = 2;
  estat2 = 0;
  Serial.write(estat1);
  Serial.write(estat2);
  delay(2000);
  estat1 = 2;
  estat2 = 1;
  Serial.write(estat1);
  Serial.write(estat2);
  delay(1000);
  estat1 = 2;
  estat2 = 2;
  Serial.write(estat1);
  Serial.write(estat2);
  delay(500);
}

//******************************* FUNCIONS ****************************************
