/* to enter roll number, name and marks in three subjects of 50 students 
   and display records along with total marks and percentage */

#include<stdio.h>
struct student{
	int rollNo;
	char name[30];
	float m1, m2, m3, total, percent;
};

void main(){
	int i;
	struct student s[50];
	
	// entering the details
	for(i=0;i<50;i++){
		printf("\nFor student %d:\n", i+1);
		printf("Enter the name.");
		getchar();
		gets(s[i].name);
		printf("Enter the roll number.");
		scanf("%d", &s[i].rollNo);
		printf("Enter the marks in three subjects.");
		scanf("%f%f%f", &s[i].m1, &s[i].m2, &s[i].m3);
	}
	
	//printing
	printf("Roll No.\t Name\t Marks 1\t Marks 2\t Marks 3\t Total\t Percent\n");
	for(i=0;i<50;i++){
		s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
		s[i].percent = (s[i].total/300)*100;
		printf("%d\t %s\t %f\t %f\t %f\t %f\t %f\n", s[i].rollNo, s[i].name, s[i].m1, s[i].m2,
		s[i].m3, s[i].total, s[i].percent);
	}
}

