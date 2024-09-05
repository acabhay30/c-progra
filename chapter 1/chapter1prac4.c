#include<stdio.h>

int main(){
    int prin, time;
    float inte, si;
    printf("Enter the prin");
    scanf("%d", &prin);
    printf("Enter the time");
    scanf("%d", &time);
    printf("Enter the int");
    scanf("%f", &inte);
    si = (prin * time * inte)/100;
    printf("%f", si);
    return 0;
}