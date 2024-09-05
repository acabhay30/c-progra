#include<stdio.h>

int main()
{
    int a,b;
    printf("enter the number1\n");
    scanf("%d", &a);
    printf("enter the number2\n");
    scanf("%d", &b);

    if (a<b)
    {
        printf("the number2:%d\n", b);
    }
    else
    {
        printf("the number1:%d\n", a);
    }
    return 0;

}