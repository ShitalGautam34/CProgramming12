#include<stdio.h>

void main(){
	FILE *fp;
	char name[50], add[50];
	float salary;
	
	printf("Enter name, address and salary.");
	scanf("%s %s %f", &name, &add, &salary);
	
	fp = fopen("employee.txt", "w");
	fprintf(fp, "%s\t %s\t %f", name, add, salary);
	fclose(fp);
	printf("Data added successfully...");
}
