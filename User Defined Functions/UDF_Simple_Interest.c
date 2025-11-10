#include<stdio.h>
void interest(float, float, float);

void main(){
	float p,t,r;
	printf("Enter principal, time and rate.");
	scanf("%f%f%f",&p,&t,&r);
	interest(p,t,r);
}

void interest(float p, float t, float r){
	float i, a;
	i = (p*t*r)/100;
	a = p + i;
	printf("The interest is %.2f and amount is %.2f", i,a);
}
