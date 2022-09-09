//Bisection method 

#include<stdio.h>
#include<math.h>
#define e 0.005
#define f(x) x*x*x-x-3
int  main()
{
	
   int itr=1;
   float xl,xu,xm,fxl,fxu,fxm;
   printf("Enter the value of first initial guess:");
   scanf("%f",&xl);
   printf("\nEnter the value of second initial guess:");
   scanf("%f",&xu);
   fxl=f(xl);
   fxu=f(xu);
   if (fxl*fxu>0)
   printf("Solution does not exit");
   else
   {
	begin:
	xm=(xl+xu)/2;
	fxm=f(xm);
	if((fxl*fxm)<0)
		xu=xm;
      else
      {
	xl=xm;
	 fxl=fxm;
      }
      if((fabs(xu-xl)/xl)<e)
      {
	xm=(xl+xu)/2;
	 printf("\nRoot=%.2f",xm);
	 printf("\nFuctional value =%f",f(xm));
	 printf("\nIteration steps =%d",itr);
      }
      else
      {
itr++;
	 goto begin;
	 
      }
   }
   return 0;
}
