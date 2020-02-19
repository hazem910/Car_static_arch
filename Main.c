/*
 * DIO_TEST.c
 *
 * Created: 2/17/2020 4:14:39 PM
 *  Author: Hazem
 */ 
#include "..\APP\car_sm.h"

int main(void)
{ 
   /*CAR_INIT_*/ 
Car_SM_Init();
/*SUPER LOOP OF THE APPLICATION */
	while(1)
  {     
     /*CAR_LOGIC_USING_ULTRASONIC*/
	Car_SM_Update();
   /*SOFTWARE_DELAY*/
   softwareDelayMs(100);
  }

}