#include "divide.h"
#include <stdio.h>
#include "divide.h"

float divide_float(float a,float b)
{
    
    if (b!=0){
        printf("%f", a/b);
        return a/b;
        }
        else{
        printf("invalid operation");
        }
    
}
