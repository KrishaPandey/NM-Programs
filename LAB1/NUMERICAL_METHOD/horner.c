//horners rule 
#include<stdio.h>
#include<conio.h>
void main() {
	int degree,x;
	int coeff[degree+1], i,div[degree+1];
	int sum = 0;
	
	
	printf("\nEnter the degree of the polynomial: ");
	scanf("%d",&degree);
	
	
	printf("\nEnter the coeffients from lower order to higher order: \n");
	for(i=0; i<=degree; i++) {
		scanf("%d",&coeff[i]);
	}
	
printf("\nEnter the value of x: ");
	scanf("%d",&x);

	
	sum = coeff[degree];
	for(i=degree-1; i>=0; i--) {
		sum = sum*x + coeff[i];
	}
	
	printf("\nRemainder: %d",sum);
}

