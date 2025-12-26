// to calculate z=x^y using recursion
#include<stdio.h>
int power(int, int);

void main(){
	int x,y;
	printf("Enter the base number. ");
	scanf("%d", &x);
	printf("Enter the exponent number. ");
	scanf("%d", &y);
	printf("%d to the power of %d is %d",x,y,power(x,y));
}

int power(int x, int y){
	if(y==0) return 1;
	if(y==1) return x;
	return (x*power(x, y-1));
}
