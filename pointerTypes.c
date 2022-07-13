//NOTE: If you compile this code, it will show some errors. But everything works fine! :)
//It's because I needed to show the output in integer to see the memory. 

#include <stdio.h>

int main() {
    //int type
    int a = 1025;
    int *p = &a;

    printf("The size of integer is %d bytes\n", sizeof(int));
    printf("Address = %d, Value = %d\n", p, *p);
    puts("");

    //char type 
    char *p0;
    p0 = (char*)p; //typecasting

    printf("The size of char is %d bytes\n", sizeof(char));
    printf("Address = %d, Value = %d\n", p0, *p0);
    puts("");

    //void type - Generic pointer
    void *p1;
    p1 = p;
    printf("Address = %d\n", p1);
    puts(""); 

    return 0;
}