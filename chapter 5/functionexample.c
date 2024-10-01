
// simple example
// #include <stdio.h>
//  void birthday()
//  {
//     printf("happy birthday abhay\n");
//     printf("happy birthday adi\n");
//     printf("happy birthday aditya\n");
//  }

//  int main(){
//     birthday();
//     birthday();
//     birthday();
//  }

// another example
#include <stdio.h>

int multi(int a, int b)
{
    int c;
    c = a * b;
    return c;
}

float div(int a, int b)
{
    float c;
    c = (float)a / b;
    return c;
}

int main()
{
    int x, y;
    x = 10;
    y = 20;
    float z = div(x, y);
    int a = multi(x, y);
    printf("%f \n ", z);
    printf("%d \n", a);
}