#include <stdio.h>

int main(){
    int arr[10];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n*(i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
       printf("the table of %d X %d = %d \n", i+1 ,n ,arr[i]);
    }
    
    return 0;
}