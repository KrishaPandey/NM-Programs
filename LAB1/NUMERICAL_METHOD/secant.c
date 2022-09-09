
//secant method
#include<stdio.h>
#include<math.h>
#define e 0.005
float F(float x){
	return x*x*x-x-3;
}

int main()
{
	int itr=1;
   float x1,x2,x3,f1,f2,f3;
   printf("Enter two initial value:");
   scanf("%f%f",&x1,&x2);
   f1=F(x1);
   f2=F(x2);
   begin:
   	x3=(f2*x1-f1*x2)/(f2-f1);
   	f3=F(x3);
      if(fabs((x3-x2)/x3)<e)
      {printf("\nRoot=%.2f",x3);
      printf("\nThe fuction value=%.3f",F(x3));
      printf("\nNo. of Iteration steps=%d",itr);
   }
   else{
         itr++;
      	
         	x1=x2;
            f1=f2;
            x2=x3;
            f2=f3;
            goto begin;
         }
      
      return 0;
}
