#include<stdio.h>

void main(){
	FILE *fp;
	int roll;
	char name[50];
	fp = fopen("exam.dat", "r");
	
	printf("Data read from file:\n");
	printf("Roll\t Name\n");
	while(fscanf(fp, "%d %s", &roll, &name) != EOF){
		printf("%d\t %s\n", roll, name);
	}
	
	fclose(fp);
}
