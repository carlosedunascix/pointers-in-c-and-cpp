#include <stdio.h>
#include <stdlib.h>

int main() {
    int a; //goes on stack

    int* p = (int* ) malloc(sizeof(int)); //set a space in heap memory (4 bytes integer)
    *p = 10; //adding the value 10 in the memory allocated 
    free(p); //cleaning the space in heap memory (it's very important)

    p = (int *) malloc(20 * sizeof(int)); //alocating a array of 20 intengers  
    free(p); //cleaning again

    return 0;
}