#include<stdio.h>

int main(){
    int radius;
    printf("Enter the radius: ");
    scanf("%d", &radius);
    float pi, area;
    pi = 3.14;
    area = 2 * pi *radius;
    printf("%f", area);
    return 0;

}