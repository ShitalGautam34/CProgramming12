#include<stdio.h>
void seri();

void main(){seri();}

void seri(){
	int i;
	for(i=1;i<=99;i=i+2)
		printf("%d\t",i);
}
