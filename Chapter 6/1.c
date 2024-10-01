#include <stdio.h>

int main ()
{
    int i = 72;
    int* j = &i; // j is pointing to i here the adress is stored

    printf("The vale of i is %u ", &i);
    printf("The of j is %d\n", *(&i));
}