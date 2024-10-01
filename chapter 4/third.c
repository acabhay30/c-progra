#include<stdio.h>

int main()
{
    int i = 1, a;
    printf("enter the number of repetion\n");
    scanf("%d", &a);
    do
    {
        printf("The value of i is %d\n",i);
        i++;
    } while (i<=a);
    return 0;
}