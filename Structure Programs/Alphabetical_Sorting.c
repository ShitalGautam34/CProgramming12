/* to input roll number, name and address of students and
i. display details in alphabetical order with respect to name
ii. display detials of student who is from "Gaindakot". */

#include<stdio.h>
#include<string.h>
struct student{
	int rollNo;
	char name[30];
	char add[50];
};

void main(){
	int i,j,n;
	printf("Enter the number of students.");
	scanf("%d", &n);
	struct student s[n], temp;
	
	// entering the details
	for(i=0;i<n;i++){
    	printf("\nFor student %d:\n", i+1);
		printf("Enter the roll number.");
		scanf("%d", &s[i].rollNo);
		getchar();
		printf("Enter the name.");
		gets(s[i].name);
		printf("Enter the address.");
		gets(s[i].add);
	}
	
	// sorting in alphabetical order
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(s[i].name, s[j].name) == 1){
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	// strcmp("abc", "abd"); // gives -1
	// strcmp("abc", "abc"); // gives 0
	// strcmp("abd", "abc"));// gives 1
	
	//printing the sorted list
	printf("The alphabetically sorted list is:\n");
	printf("Roll No.\t Name\t Address\n");
	for(i=0;i<n;i++){
		printf("%d\t %s\t %s\n", s[i].rollNo, s[i].name, s[i].add);
	}
	
	// to check for student from Gaindakot
	printf("\nThe students from Gaindakot are:\n");
	for(i=0;i<n;i++){
		if(strcmp(s[i].add, "Gaindakot") == 0){
			printf("%d\t %s\t %s\n", s[i].rollNo, s[i].name, s[i].add);
		}
	}
}
