#include <stdio.h>
int main()
{
    int marks[]= {12, 23, 34, 45};
    int *ptr = &marks[0];
     for (int i = 0; i < 4; i++)
    {
        printf("Enter the the marks of student %d \n ", *ptr);
        ptr++;
    }
    return 0;
}