// /*#include<stdio.h>

// int main(){
//     int var1, var2, var3;
//     var1 = 10;
//     var2 = 20;
//     var3 = var1 * var2;
//     printf("%d", var3);
//     return 0;
// }*/


#include<stdio.h>

int main(){
    int var1, var2, var3;
    printf("Enter the first integer: ");
    scanf("%d", &var1);
    printf("Enter the first integer: ");
    scanf("%d", &var2);
    var3 = var1 * var2;
    printf("The area of rectangle is %d", var3);
    return 0;
}