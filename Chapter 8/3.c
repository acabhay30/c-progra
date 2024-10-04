#include <stdio.h>
#include <string.h>
int main(){
    char st[] = "harry";
    char st2[] = "good";
    char tar[30];
    // printf("%d \n", strlen(st)); //string lenght
    strcpy(tar, st);// string copy
    strcat(st,st2);//concatenate but the value will be stored in st
    //printf("%s", tar);
    printf("%s", st);
    return 0;
}