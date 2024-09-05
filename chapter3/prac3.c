#include <stdio.h>

int main()
{
    int income, tax=0;
    printf("please enter income\n");
    scanf("%d", &income);
    if (income > 250000){
        tax = 0;
        printf("you will be in tax slab %d", tax);
    }
    if (income > 250000 && income <= 500000){
        tax = 5;
        printf("you will be in tax slab %d", tax);
    }
    if (income > 500000 && income <= 1000000){
        tax = 20;
        printf("you will be in tax slab %d", tax);
    }
    if (income >= 1000000){
        tax = 30;
        printf("you will be in tax slab %d", tax);
    }
    return 0;
}
