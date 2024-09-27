#include <stdio.h>

int fibo(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
    
}

int main()
{
     int n;
    
    // Input the value of n (the nth Fibonacci number)
    printf("Enter the position of the Fibonacci number: ");
    scanf("%d", &n);

    printf("the number is %d", fibo(n));
}