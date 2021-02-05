#include<exponential.h>

double exponential(float num)
{
float y;
    y=num;
const float e=2.718;    
    
double res;


if(y>=0)
{
for(y;y>0;y--)
{
    res= res * e;
    }
    return res;
}
elseif(y<0)
{
 for(y;y<0;y++)
{
    res= res/e;
    }
    return res;   
}
   else
   {printf("Invalid Input");}

return 0;
}
