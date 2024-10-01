#include <stdio.h>

void good_morning(); // function prototype
void good_evening();// function prototype
void good_night();// function prototype

void good_morning()
{
    printf("good morning\n"); 
}
void good_evening()
{
    printf("good evening\n");
}
void good_night()
{
    printf("good night\n");
}

int main()
{
    good_morning();
    good_evening();
    good_night();
    return 0;

}