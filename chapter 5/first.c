#include<stdio.h>

int sum (int,int);

int sum (int x , int y)
{
    printf(" The sum id %d\n", x + y);
}
int main()
{
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("the sum is %d\n", c);
    sum(a , b);

    int a1 = 1;
    int b1 = 2;

    // int c1 = a1 + b1;
    // printf("the sum is %d\n", c1);
    sum(a1, b1);
    int a2 = 1;
    int b2 = 2;

    // int c2 = a2 + b2;
    // printf("the sum is %d\n", c2);
    sum(a2 , b2);
}