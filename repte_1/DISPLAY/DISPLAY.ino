/**********************************************************************************
**                                                                               **
**                                 DISPLAY                                       **
**                                                                               **
** GORKA FERNÁNDEZ RAMOS                                       20/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************

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
}

//********************************* LOOP ******************************************
void loop()
{
    for (byte count = 0; count < 16; count++)
  {
     delay(500);
}

//******************************* FUNCIONS ****************************************
