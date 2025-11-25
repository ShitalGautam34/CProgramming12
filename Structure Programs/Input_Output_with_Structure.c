// to input account number, name and address of given customers and display them
#include<stdio.h>

struct customer{
	int accNo;
	char name[30];
	char add[50];
};

void main(){
	int i, size;
	printf("Enter the number of customers. ");
	scanf("%d", &size);
	struct customer c[size];
	
	for(i=0;i<size;i++){
		printf("\nFor customer %d:\n", i+1);
		printf("Enter account number.");
		scanf("%d", &c[i].accNo);
		getchar();
		printf("Enter name of customer.");
		gets(c[i].name);
		printf("Enter address of customer.");
		gets(c[i].add);
	}
	printf("\nAccount Number\tName\tAddress\n");
	for(i=0;i<size;i++){
		printf("%d\t %s\t %s\n", c[i].accNo, c[i].name, c[i].add);
	}
}
