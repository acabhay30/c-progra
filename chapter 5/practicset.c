#include<stdio.h>
 
 float avg(int a, int b, int c)
{
    float avg1 = (a + b + c)/3;
    return avg1;
} 
 
 int main ()
 {
    int x, y, z;
    x = 10;
    y = 20;
    z = 30;

    float f = avg(x, y, z);
    printf("%f", f);
 }