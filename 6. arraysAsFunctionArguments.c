#include<stdio.h>

int sumOfElements(int A[], int size) {
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum += A[i];
    }
    return sum;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A)/sizeof(A[0]);
    int total = sumOfElements(A, size);
    printf("Sum of elements = %d\n", total);
    
    return 0;
}