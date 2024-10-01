#include <stdio.h>

void change(int* a)
{
    *a = *a * 30;
}

int main()
{
    int x = 50;
    printf("the value of x is %d \n", x);
    change(&x);
    printf("the value of x is %d \n", x);
}

