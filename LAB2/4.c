#include<stdio.h>
#include<conio.h>

int main()
{
    float x[10], y[10], p[10];
    float k,f,f1=1,f2=0;
    int i,j=1,n;
    printf("\nEnter the number of observations:\n");
    scanf("%d", &n);

    printf("\nEnter the different values of x and y:\n");
    for (i=1;i<=n;i++){
		
        printf("X[%d]=",i);
        scanf("%f", &x[i]);
        printf("Y[%d]=",i);
        scanf("%f", &y[i]);
}
    f=y[1];
    printf("\nEnter the value of x:\n");
    scanf("%f", &k);

    do
    {
        for (i=1;i<=n-1;i++)
        {
            p[i] = ((y[i+1]-y[i])/(x[i+j]-x[i]));
            y[i]=p[i];
        }
        f1=1;
        for(i=1;i<=j;i++)
            {
                f1*=(k-x[i]);
            }
        f2+=(y[1]*f1);
        n--;
        j++;
    }

    while(n!=1);
    f+=f2;
    printf("The value at %f = %f", k , f);
    getch();
    return 0;
}
