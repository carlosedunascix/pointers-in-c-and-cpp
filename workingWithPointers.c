#include <stdio.h>

int main() {
    int a;
    int *p;
    a = 10;
    p = &a; //&a meaning adress of a
    printf("%p\n", p);
    printf("%d\n", *p); // *p value at adress pointed by p.
    printf("%p\n", &a);

    //Modify the value using the pointer 
    *p = 12; //dereferencing 
    printf("%d\n", a);

    //Pointer Arithmetic
    printf("%d\n", p);
    printf("%d\n", p+1); //go to next integer address, more 4 bytes

}