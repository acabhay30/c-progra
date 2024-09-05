#include<stdio.h>

int main(){
    float far, cel;
    printf("Enter the cel");
    scanf("%f", &cel);
    far = ((cel * 1.8) + 32);
    printf("%f", far);
    return 0;
}