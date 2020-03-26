/*
 * DIO_TEST.c
 *
 * Created: 2/17/2020 4:14:39 PM
 *  Author: Hazem
 */ 
#include "Macl/DIO.h"
#include "Common/softwareDelay.h"
int main(void)
{ 
   /*CAR_INIT_*/ 
DIO_Cfg_s ST_DIOINSTANCE={GPIOA,BIT1,OUTPUT};
	DIO_init(&ST_DIOINSTANCE);
/*SUPER LOOP OF THE APPLICATION */
	while(1)
  {     
     /*CAR_LOGIC_USING_ULTRASONIC*/
	DIO_Write(GPIOA,BIT1,HIGH);
	softwareDelayMs(1000);
	DIO_Write(GPIOA,BIT1,LOW);
	softwareDelayMs(1000);
   /*SOFTWARE_DELAY*/
   //ftwareDelayMs(100);
  }

}