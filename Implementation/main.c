#include<stdio.h>
#include "subtraction.h"
#include "add.h"

int main(){

    //first input from user: a number
    printf("Hello user, please enter the first number \n");
    int A=0;
    scanf("%d%d", &A);
    

    //users choice 
    char choice='y';
    
    while (choice=='y')
    {   int operation;
        printf("hello user, you can do operation now please proceed\n");
        printf("enter your choice for function as mentioned further:\n ");
        printf("+: 0\n-: 1\nx: 2\n/: 3\n\%: 4\nsqrt: 5\np\%: 6\ncube_root: 7\nexpo.: 8\nexit: 9");
        scanf("%d",&operation);
        
        
        //switching functions
        switch (operation)
        {

        //exit choice{
        case 9:

            printf("you have chosen to exit\n")
            break;

        //addition function
        case 0:
            //call your Addition fuunction
            break;

        //subtraction function
        case 1: 
            //call your subtraction function
            break;

        //multiplication function
        case 2:
            //add your multiplication function
            break;

        //division function
        case 3:
            //add your division function 
            break;

        //modulus division function 
        case 4:
            //add your modulus function 
            break;


        //sqrt function
        case 5:
            //add your sqrt function
            break;

        //percentage function
        case 6:
            // add your percentage function here.


        //cube root function
        case 7:
            //add your cuberoot function here
            break;

        
        //cube exponential function
        case 8:
            //add exponential root function

        
        
        default:
            break;
        }

    }
    
    



    return 0;
}