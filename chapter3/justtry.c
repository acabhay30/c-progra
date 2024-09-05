// #include<stdio.h>

// int main()
// {
//     int a,b;
//     printf("enter the number1\n");
//     scanf("%d", &a);
//     printf("enter the number2\n");
//     scanf("%d", &b);

//     if (a<b)
//     {
//         printf("the number2:%d\n", b);
//     }
//     else
//     {
//         printf("the number1:%d\n", a);
//     }
//     return 0;

// }

//

#include <stdio.h>

int main()
{
    int a;
    printf("enter the number1\n");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        printf("this number is divisible %d to 5", a);
    }
    else if (a % 11 == 0)   
    {
        printf("this number is divisible %d to 11", a);
    }
    else
    {
        printf("The number %d is not divisible with 5 nor 11", a);
    }
    return 0;
}  

