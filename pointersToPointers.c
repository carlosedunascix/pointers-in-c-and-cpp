#include <stdio.h>

int main() {
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int ***r = &q;

    //print section
    printf("%d\n", *p); //show me the value in x variable
    printf("%d\n", *q); //show me the address you hold (using integer to see the memory)
    printf("%d\n", *(*q)); //dereferencing twice to show the value 
    printf("%d\n", *(*r)); //show the address that q hold
    printf("%d\n", *(*(*r))); //dereferencing three times to show the value

    ***r = 10; //put the value in x variable

    printf("%d\n", x);
    puts("");



    return 0;
}