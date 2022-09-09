//newton raphson method
#include<stdio.h>
#include<math.h>
#define e 0.005
float f(float x){
	return x*x*x-x-3;
}
float fd(float x){
	return 3*x*x-1;
}

int main()
{
   int itr=1;
   float xi,x1,fxi,fdxi,root;
   printf("\nEnter the initial value:");
   scanf("%f",&xi);
   begin:
   fxi=f(xi);
   fdxi=fd(xi);
   x1=xi-(fxi/fdxi);
   
   if((fabs(x1-xi)/x1)<e)
   {
   	
   	printf("\nRoot=%f",x1);
      printf("\nThe fuction value=%f",f(x1));
      printf("\nNo. of Iteration steps=%d",itr);
   }
   else
   {
   	xi=x1;
   	fxi=f(x1);
      itr ++;
      goto begin;
      }
      
   return 0;
 }
