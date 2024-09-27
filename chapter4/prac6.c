#include<stdio.h>

int main()
{
    int n=8;
    int sum = 0;
    int i = 0;
    // for (int i = 0; i <= 10; i++)
    // {
    //     sum = sum + n*i;
    // }

    
    while (i <= 10)
    {
        sum = sum + n*i; // placement of increment operator can give give different answer
        i++; 
    }
    
    printf("the sum is %d \n", sum);
    return 0;
}