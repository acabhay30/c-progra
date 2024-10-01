#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    do
    {
        sum+=i;
        i++ ;
    } while (i<=10);
    printf("The sum of numbers from 1 to 10 is: %d\n", sum);
}


