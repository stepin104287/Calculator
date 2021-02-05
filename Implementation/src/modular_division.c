#include "modular_division.h"
#include <stdio.h>


int modular_division(int a,int b)
{
    if(b!=0){
        printf("%d\n",a%b);
        return a%b;
    }else{
        printf("invalid operation\n");
    }
}