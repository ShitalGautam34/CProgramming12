#include<stdio.h>
void seq();

void main(){seq();}

void seq(){
	int i;
	for(i=1;i<=10;i++)
		printf("%d\t", i*i);
}
