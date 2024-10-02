#include <stdio.h>
int main()

{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {

        printf("Enter the the marks of student %d", i);
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    printf("the value at address %u is %d", ptr + 2, *(ptr + 2));
    return 0;
}