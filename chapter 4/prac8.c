#include <stdio.h>

int main()
{
    int n ;
    scanf ("%d", &n);
    int prime;
    for (int i = 2; i < n; i++)//never use i<=n beacuse it will output wrong answer as it will take the number even last number as prime
    {
       if (n%i == 0)
       {
        prime = 0;
        
       }
        
    }
    if (prime)
    {
        printf("it is a prime");
    }
    else
    {
        printf("it is not a prime");
    }
    
}