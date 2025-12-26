#include <stdio.h>

void main() {
    int q = 5;  // normal variable q
    int *p;  // pointer variable p
    p = &q;  // p storing the address of variable q

    printf("Value of q = %d\n", q);
    printf("Address of q = %u\n", &q);
    printf("Value of pointer p = %u\n", p);
    printf("Value at address stored by pointer p = %d\n", *p);
}

