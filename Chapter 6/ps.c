#include <stdio.h>

int main()
{
    int a = 25;
    int* ptr = &a;
    printf("The value of address of the variabe is %p", ptr);
    printf("The value of address of the variabe is %d", *ptr);
}