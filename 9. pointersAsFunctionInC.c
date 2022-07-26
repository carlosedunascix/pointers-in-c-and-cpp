#include<stdio.h>
#include<stdlib.h>

int main() {
    //malloc
    int n;
    printf("Enter size of array: \n");
    scanf("%d", &n);

    //dynamically allocated array
    int *AN = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        AN[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", AN[i]);
    }

    free(AN); //free the memory
    AN = NULL;  //After free the memory, it's important that you setup the previous created pointer to NULL

    printf("\n");

    //calloc
    int m;
    printf("Enter size of array: \n");
    scanf("%d", &m);

    //dynamically allocated array
    int *AM = (int *) calloc(n, sizeof(int));

    //Calloc will allocate and setup all the elements with the value 0(zero)
    for (int i = 0; i < m; i++) {
        printf("%d ", AM[i]);
    }

   free(AM);
   AM = NULL;


    return 0;
}