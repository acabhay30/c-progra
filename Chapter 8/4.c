#include <stdio.h>

int main(){
    int it1[30];
    int it2[4];
    //scanf("%s", &it1);
    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &it2[i]);
        fflush(stdin);
    }
    it2[3]='\0';
    printf("%s", it2);
    return 0;
}