#include<stdio.h>
#include "subtraction.h"
#include "add.h"
#include "cuberoot.h"
#include "divide.h"
#include "exponential.h"
#include "modular_division"
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

        //exit choice{
        case 9:

            printf("you have chosen to exit\n");
            break;

        //addition function
        case 0:
            //call your Addition fuunction
            break;    
            

        //simple division function
        case 3:
            //add your simple division function 
            break;

        //modulus modulardivision function 
        case 4:
                
            //add your modulardivision function
            break;
        
        //sqrt function
        case 5:
            //add your sqrt function
            break;


        //percentage function
        case 6:
            // add your percentage function here.
            break;


        //cube root function
        case 7:
            //add your cuberoot function here
            break;

        
        //cube exponential function
        case 8:
            //add exponential root function
            break;

        
        
        default:
            break;
    }

  
return 0;}