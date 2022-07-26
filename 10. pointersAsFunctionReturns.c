#include<stdio.h>
#include<stdlib.h>

int *Add (int* a, int* b) {
    int *c = (int *) malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
}

int main() {
    int a = 2; int b = 4;
    int *ptr = Add(&a, &b);
    printf("Sum of a + b = %d\n", *ptr);

    return 0;
}