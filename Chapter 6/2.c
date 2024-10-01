#include <stdio.h>
 int main()
 {
    int i = 6; //simple interger
    int* j = &i; // adress of i is stored
    int** k = &j; // adress of j is stored
    printf("the address is %d\n ", i);
    printf("the address is %d\n ", j);
    printf("the address is %d \n %", i);
 }