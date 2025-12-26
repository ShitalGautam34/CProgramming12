#include <stdio.h>

struct student {
    char name[50];
    char address[50];
    float marks;
};

int main() {
    FILE *fp;
    int i;int n=4;
    fp = fopen("student.txt", "w");
    struct student s[n];

    for (i=0;i<n;i++){
        printf("Enter name, address and marks: ");
        scanf("%s %s %f", &s[i].name, &s[i].address, &s[i].marks);

        fprintf(fp, "%s\t %s\t %f\n", s[i].name, s[i].address, s[i].marks);
    }
    fclose(fp);
    printf("\nStudent data stored successfully...");
    
    fp = fopen("student.txt", "r");
    printf("\nStudents with marks 60-80 are:\n");
    printf("Name\t Address\t Marks\n");
    for(i=0;i<n;i++){
    	fscanf(fp, "%s %s %f", &s[i].name, &s[i].address, &s[i].marks);
    	if(s[i].marks > 60 && s[i].marks <=80){
    		printf("%s\t %s\t %f\n", s[i].name, s[i].address, s[i].marks);
		}
	}
	fclose(fp);
    return 0;
}

