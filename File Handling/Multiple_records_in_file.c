#include <stdio.h>

struct employee {
    char name[50];
    char address[50];
    float salary;
};

int main() {
    FILE *fp;
    int n, i;
    fp = fopen("employee.txt", "w");

    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct employee e[n];

    for (i = 0; i < n; i++) {
        printf("Enter name, address and salary: ");
        scanf("%s %s %f", &e[i].name, &e[i].address, &e[i].salary);

        fprintf(fp, "%s\t %s\t %f\n", e[i].name, e[i].address, e[i].salary);
    }
    fclose(fp);
    printf("\nEmployee data stored successfully in employee.txt\n");

    return 0;
}

