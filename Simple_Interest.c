#include<stdio.h>

void main(){
	float p,t,r,i;
	printf("Enter principal, rate and time.");
	scanf("%f%f%f",&p,&t,&r);
	
	i = (p*t*r)/100;
	printf("The interest is %f.", i);
}
