#include <STDIO.H>

int main()
{
    int n=6;
    for (int i = n; i; i--)
    {
        if (i == 3)
        {
            break;
        }
        
        printf("the value of i is %d \n", i);
    }
    return 0;
}