#include<stdio.h>
#include "subtraction.h"
#include "add.h"
#include "cuberoot.h"
#include "divide.h"
#include "exponential.h"
#include "modular_division.h"
#include "multiplication.h"
#include "percentage.h"
#include "squareroot.h"


int main()
{

    //first input from user: a number
    int A,B;
    printf("Hello user, please enter the 1st numbers \n");
    scanf("%d", &A);
    printf("Hello user, please enter the 2nd numbers \n");
    scanf("%d", &B);
    

    //users choice 
    char choice='y';
    
    int operation;
    printf("hello user, you can do operation now please proceed\n");
    printf("enter your choice for function as mentioned further:\n ");
    printf("+: 0\n-: 1\nx: 2\n/: 3\nmod. division: 4\nsqrt: 5\npercentage: 6\ncube_root: 7\nexpo.: 8\nexit: 9");
    scanf("%d",&operation);
        
        
    //switching functions
    switch (operation)
    {
        case 0:
            add(A,B);
            break;    
            
        case 1:
            subtraction(A,B);
            break;

        case 2:
            multiplication(A,B);
            break;
        case 3:
            divide_int(A,B);
            break;
        case 4:
            modular_division(A,B);
            break;
        case 5:
            squareroot(A);
            break;
        case 6:
            percentage(A,B);
            break;
        case 7:
            float temp=cuberoot(A);
            printf("%f\n",temp);
            break;
        case 8:
            exponential(A);
            break;
        case 9:

            printf("you have chosen to exit\n");
            break;

        default:
            break;
    }

  
return 0;}