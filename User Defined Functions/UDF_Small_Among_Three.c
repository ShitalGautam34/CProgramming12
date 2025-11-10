#include<stdio.h>
int check(int, int, int);

void main(){
	int a,b,c;
	printf("Enter three numbers.");
	scanf("%d%d%d",&a,&b,&c);
	printf("The smallest number is %d.",check(a,b,c));
}

int check(int a, int b, int c){
	if((a<b) && (a<c))
		return a;
	else if(b<c)
		return b;
	else
		return c;
}
