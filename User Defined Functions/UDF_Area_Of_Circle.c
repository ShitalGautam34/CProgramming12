#include<stdio.h>
void area(float);

void main(){
	float r;
	printf("Enter the radius.");
	scanf("%f", &r);
	area(r);
}

void area(float r){
	float a, PI = 3.14159;
	a = PI * r * r;
	printf("The area of circle is %f.",a);
}
