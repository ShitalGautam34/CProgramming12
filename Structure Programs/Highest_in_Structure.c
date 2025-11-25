// to enter details of students and diplay the student scoring highest GPA.
// in this approach multiple students are displayed if they have the highest GPA.

#include<stdio.h>
struct student{
	int regNo;
	char name[30];
	char add[50];
	float gpa;
};

void main(){
	int i,j,n;
	float highestGPA;
	printf("Enter the number of students.");
	scanf("%d", &n);
	struct student s[n];
	
	// entering the details
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
	
	// finding out highest GPA *to reduce complexity this can be done while entering the details
	highestGPA = s[0].gpa;
	for(i=0;i<n;i++){
		if(s[i].gpa > highestGPA)
			highestGPA = s[i].gpa;
	}
	
	//displaying the student with highest GPA
	printf("The student(s) with highest GPA(%.2f) are:\n", highestGPA);
	printf("Reg No.\t Name\t Address\t GPA\n");
	for(i=0;i<n;i++){
		if(s[i].gpa == highestGPA){
			printf("%d\t%s\t%s\t%.2f\n", s[i].regNo, s[i].name, s[i].add, s[i].gpa);
		}
	}
}
