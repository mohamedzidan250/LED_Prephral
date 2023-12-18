/*
 * main.c
 *
 *  Created on: ??�/??�/????
 *      Author: Mohamed Zidan
 */

#include"DataType.h"
#include"errorState.h"

#include"DIO_int.h"

int main()
{
  u8 Local_u8PinVal;
  DIO_enuSetPinDirection(DIO_GROUP_C,DIO_PIN_4,DIO_INPUT);
  DIO_enuSetPinValue(DIO_GROUP_C,DIO_PIN_4,DIO_FLOAT);

  DIO_enuSetPinDirection(DIO_GROUP_C,DIO_PIN_7,DIO_OUTPUT);
  while(1)
  {
    DIO_enuGetPinValue(DIO_GROUP_C,DIO_PIN_4,&Local_u8PinVal);  //switch off
    if(Local_u8PinVal == 1)
    {
      DIO_enuSetPinValue(DIO_GROUP_C,DIO_PIN_7,DIO_HIGH);
    }
    else if(Local_u8PinVal == 0)
    {
      DIO_enuSetPinValue(DIO_GROUP_C,DIO_PIN_7,DIO_LOW);
    }
  }
}

