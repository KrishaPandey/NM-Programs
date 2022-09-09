
// fixed point iteration method
#include<stdio.h>
#include<math.h>
#define e 0.005
float f(float x)
{
    return (pow(x, 3) - x - 1);
}

float g(float x)
{
    return pow((x + 1), (1.0 / 3.0));
}

int main()
{
int itr=0;
float x0,x1,error;
printf("enter the initial guess value of x\n");
scanf("%f",&x0);
begin:
x1=g(x0);
error=fabs(x1-x0)/x1;
if(error<=e)
{
printf("\n the root is %.2f",x1);
printf("\n The functional value is :%.3f",f(x1));
printf("\n No of steps is %d",itr);
}
else
{
x0=x1;
itr++;
goto begin;
}
return 0;
}
