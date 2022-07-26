#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b) {
    return a + b;
}

void printHelloToSomeone (char *name) {
    printf("Hello, %s\n", name);
}

int main() {
    int c;
    int (*p) (int, int); //this pointer will pointer to a function :0
    p = &Add; //function name will return us pointer
    c = p(2, 3);
    printf("%d\n", c);

    void (*ptr) (char*);
    ptr = &printHelloToSomeone;
    ptr("Carlos"); 

    return 0;
}