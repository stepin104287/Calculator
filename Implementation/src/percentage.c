#include "percentage.h"
#include<stdio.h>

float percentage(float num1, float num2)
{
   //float num1,num2;
   float total;
   //printf("Enter two numbers\n");
   //scanf("%f %f",&num1,&num2);
   //total=((num2-num1)*100)/num1;
   total=((num1*100)/num2);
   //printf("%f",total);
   return total;
}
