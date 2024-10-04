#include <stdio.h>

int stlen( char a [])
{
    int i = 0, count;
    char c = a[i];
    while (c != '\0')
    {
        c = a[i];
        i++;
    }
    count =  i-1; 
    return count; 
}

int main()
{
    char b[] ="abhays";
    printf("%d", stlen(b));
    return 0;
}