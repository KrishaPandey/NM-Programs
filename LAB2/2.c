//Newton’s forward difference interpolation.
#include<stdio.h>
#include<math.h>
int fact(int);
int main()
{
	float arr[10][11],x,h,p,y,px=1;
	int i,j,n,ch=30;
	
	printf("\nEnter the number of data: \n");
	scanf("%d",&n);
	
	printf("\nEnter the data\n");
	for(i=0;i<n;i++){ 
		printf("x[%d]= ",i);
		scanf("%f",&arr[i][0]);
		printf("y[%d]= ",i);
		scanf("%f",&arr[i][1]);
	}
	
	for(j=2;j<=n;j++){
		for(i=0;i<n-1;i++){
			arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
		}
	}

	printf("\nEnter the value x :");
	scanf("%f",&x);

	h=arr[1][0]-arr[0][0];
	p=(x-arr[0][0])/h;
	y=arr[0][1];
	for(i=1;i<n;i++){
		px=px*(p-(i-1));
		y=y+(arr[0][i+1]*px)/fact(i);
	}
	printf("\nTthe value of function at %f is %f",x,y);
	return 0;
}
int fact(int n){
	int i,f=1;
	for(i=1;i<=n;i++)
	f=f*i;
	return f;
}
