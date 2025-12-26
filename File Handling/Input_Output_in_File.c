#include<stdio.h>

void main(){
	int num1, num2;
	FILE *fp;
	
	printf("Enter a number:");
	scanf("%d", &num1);
	
	fp = fopen("example.txt", "w");
	fprintf(fp, "%d", num1);
	fclose(fp);
	
	fp = fopen("example.txt", "r");
	fscanf(fp, "%d", &num2);
	printf("The number entered in file is %d.", num2);
	fclose(fp);
}
