#include <stdio.h>
#include<stdlib.h>
int main() {
    char *name = (char*)malloc(5*sizeof(char)) ;
    for (int i = 0; i < 5; i++)
    {
    scanf(" %c",&name[i]);
    }
    name = (char*)realloc(name,10*sizeof(char));
    for (int i = 5; i < 10; i++)
    {
        scanf(" %c",&name[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%c",name[i]);
    }
    free(name) ;
    return 0;
}