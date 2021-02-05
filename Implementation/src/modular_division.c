#include "modular_division.h"
#include <stdio.h>

int modular_division_int(int a,int b)
{
    int c;
    c=a%b;
    
    if(a>b)
    {
        return c;
    }

    else
    
    {
        return a;
    }
}


float modular_division_float(float a,float b)
{
    float c;
    c=a%b;
    
    if(a>b)
    {
        return c;
    }

    else
    
    {
        return a;
    }
}