#include "percentage.h"
#include<stdio.h>

float percentage(float num1, float num2)
  
{
   float total;
   printf("Enter two numbers:\n");
   if(num2==0)
   {
       printf("Undefined");
   }
   
   else
   {
   //total=((num2-num1)*100)/num1;
      total=((num1*num2)/100);
      printf("%f",total);
   //return total;
   }
}

