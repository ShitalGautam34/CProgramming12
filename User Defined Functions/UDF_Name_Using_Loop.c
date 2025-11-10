#include<stdio.h>
void loopPrint();

void main(){loopPrint();}

void loopPrint(){
	int i,j=1,k=1;
	printf("Using for loop.\n");
	for(i=1;i<=10;i++){
		printf("%d. Shital Gautam\n",i);
	}
	
	printf("\nUsing while loop.\n");
	while(j<=10){
		printf("%d. Shital Gautam\n",j);
		j++;
	}
	
	printf("\nUsing do while loop.\n");
	do{
		printf("%d. Shital Gautam\n",k);
		k++;
	}while(k<=10);
}
