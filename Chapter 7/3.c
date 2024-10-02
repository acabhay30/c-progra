#include<stdio.h>
int main ()

{
int marks [3][2];
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 2; j++)
    {
        printf("enter the vale of arr[%d][%d]", i, j);
        scanf("%d", &marks[i][j]);
    }
    
}
return 0;
}