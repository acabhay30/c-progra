#include <stdio.h>
int neg(int a[], int n)

{
    int positive = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive++;
        }
    }
    return positive;
}
int main()
{
    int a[] = {1,2,3,-4,5,-6,7,-8,-9,-10};
    printf("the number are %d", neg(a, 10));
    return 0;
}