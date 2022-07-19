#include <stdio.h>

int main() {
  int A[] = {2, 4, 5, 8, 1};

  printf("%d\n", A); //Show the base address 
  printf("%d\n", &A[0]); //Show the base address 
  printf("%d\n", A[0]); //show the value
  printf("%d\n", *A); //Show the value

  //a loop showing the addresses and the value in the address
  for (int i = 0; i < 5; i++) {
    printf("Address = %d\n", &A[i]);  
    printf("Address = %d\n", A+i); 
    printf("Value: %d\n", A[i]);
    printf("Value: %d\n", *(A + i));
    return 0;
}