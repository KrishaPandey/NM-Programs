//Newton’s backward difference interpolation. 
#include<stdio.h>
int fact(int);
int main()
{
	int n,i,j,ch=30;
	float arr[10][11],px=1,x,y,p,h;
	printf("\nEnter the no of data:");
	scanf("%d",&n);
	printf("\nEnter the data:\n");
	
	for(i=0;i<n;i++){
		printf("X[%d]=",i);
		scanf("%f",&arr[i][0]);
		printf("Y[%d]=",i);
		scanf("%f",&arr[i][1]);
	}
		
	for(j=2;j<=n;j++){
		for(i=0;i<n-1;i++)
			arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
	}

	printf("\nEnter the value of x :");
	scanf("%f",&x);
		
	h=arr[n-1][0]-arr[n-2][0];
	p=(x-arr[n-1][0])/h;
	y=arr[n-1][1];
	for(i=1;i<n;i++){
		px=px*(p+(i-1));
		y=y+(arr[n-1-i][i+1]*px)/fact(i);
	}
	printf("\nThe value of f(x) at %f is %f",x,y);
	return 0;
}
int fact(int n){
	int f=1,i;
	for(i=1;i<=n;i++)
	f=f*i;
	return f;
}
