#include "divide.h"
#include <stdio.h>
/*
int divide_int(int a,int b)
{
    int c;
    c=a/b;
    
    if(a>b)
    {
        return c;
    }

    else
    
    {
        return 0;
    }
}
*/

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
