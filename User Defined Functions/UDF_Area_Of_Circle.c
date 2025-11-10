#include<stdio.h>
void area(int);

void main(){
	float r;
	printf("Enter the radius.");
	scanf("%f", &r);
	area(r);
}

void area(int r){
	float a, PI = 3.14159;
	a = PI * r * r;
	printf("The area of circle is %f.",a);
}
