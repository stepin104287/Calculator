#include "exponential.h"

double exponential(float num)
{
float y;
y=num;
const float e = 2.718;
double res;
res = 1;
if(y>=0)
{
for(y;y>0;y--)
{
    res= res * e;
    }
    
    printf("%lf\n", res);
    return res;
}
else if(y<0)
{
 for(y;y<0;y++)
{
    res= res/e;
    }
    
    printf("%lf\n", res);
    return res;
}
   else
   {printf("Invalid Input");

return 0;}
}

