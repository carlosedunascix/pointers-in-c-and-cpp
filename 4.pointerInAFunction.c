#include <stdio.h>

void Increment(int *p) {
    *p = (*p) + 1; //Value is equal value plus one
}

int main() {
    int a; 
    a = 10;
    Increment(&a); //calling the function by reference
    printf("%d\n", a);

    return 0;
}