#include "percentage.h"
#include<stdio.h>

float percentage(float num1, float num2)
{
   float total;
   total=((num1*100)/num2);
   printf("%f\n",total);
   return total;
}
