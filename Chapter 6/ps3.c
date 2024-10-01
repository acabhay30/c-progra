#include <stdio.h>

int sum_avg(int* a, int* b)
{
    int* sum = *a + *b;
    int* avg = (*a + *b)/2;
    int* ptr = &sum;
    int* ptr2 = &avg;
    printf ("avg = %d", avg);
    printf ("sum = %d", sum);
    printf ("add sum = %p", ptr);
    printf ("add avg = %p", ptr2);
    return 0;
}

int main()
{
    int x = 1;
    int y = 3;
    sum_avg(&x, &y);
}