#include "squareroot.h"
#include <stdio.h>
#include <math.h>

int squareroot(int x)
{
    float result;

    result=sqrt(x);

    printf("%f\n",result);
    
    return result;

}