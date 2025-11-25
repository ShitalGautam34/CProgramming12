// to input deatils of students and sort them with respect to GPA
#include<stdio.h>
struct student{
	int regNo;
	char name[30];
	char add[50];
	float gpa;
};

void main(){
	int i,j,n;
	printf("Enter the number of students.");
	scanf("%d", &n);
	struct student s[n], temp;
	
	for(i=0;i<n;i++){
		printf("\nFor student %d:\n", i+1);
		printf("Enter the registration number.");
		scanf("%d", &s[i].regNo);
		getchar();
		printf("Enter the name.");
		gets(s[i].name);
		printf("Enter the address.");
		gets(s[i].add);
		printf("Enter the GPA.");
		scanf("%f", &s[i].gpa);
	}
	
	//sorting
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(s[i].gpa > s[j].gpa){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	
	//displaying
	printf("The sorted list is:\n");
	printf("Registration No. Name \tAddress \tGPA\n");
	for(i=0;i<n;i++){
		printf("\t%d\t%s\t%s\t%.2f\n", s[i].regNo, s[i].name, s[i].add, s[i].gpa);
	}
}
