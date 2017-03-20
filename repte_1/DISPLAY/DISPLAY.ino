/**********************************************************************************
**                                                                               **
**                                DISPLAY                                        **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       20/03/2017        **
**********************************************************************************/
//******************************* INCLUDES ****************************************
//******************************* VARIABLES ***************************************
byte seven_seg_digits[16][7] = {
  { 1, 1, 1, 1, 1, 1, 0 }, // = Digito 0
  { 0, 1, 1, 0, 0, 0, 0 }, // = Digito 1
  { 1, 1, 0, 1, 1, 0, 1 }, // = Digito 2
  { 1, 1, 1, 1, 0, 0, 1 }, // = Digito 3
  { 0, 1, 1, 0, 0, 1, 1 }, // = Digito 4
  { 1, 0, 1, 1, 0, 1, 1 }, // = Digito 5
  { 1, 0, 1, 1, 1, 1, 1 }, // = Digito 6
  { 1, 1, 1, 0, 0, 0, 0 }, // = Digito 7
  { 1, 1, 1, 1, 1, 1, 1 }, // = Digito 8
  { 1, 1, 1, 0, 0, 1, 1 }, // = Digito 9
};
//******************************** SETUP ******************************************

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  writePUNT(0);
}

void writePUNT(byte dot)
{
  digitalWrite(9, dot);
}

void sevenSegWrite(byte digit)
{
  byte pin = 2;

  for (byte segCount = 0; segCount < 7; ++segCount)
  {
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    ++pin;
  }
  writePUNT(1);
  delay(100);
  writePUNT(0);
}
//********************************* LOOP ******************************************
void loop()
{
  for (byte count = 0; count < 10; count++)
  {
    delay(800);
    sevenSegWrite(count);
  }
  delay(0);
}

//******************************* FUNCIONS ****************************************
