#include <stdio.h>
#include<stdlib.h>

int main() {
    int a ;
    scanf("%d",&a);
    char *name = (char*)malloc(a*sizeof(char));
    for (int i = 0; i < a; i++)
    {
        scanf(" %c",&name[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%c",name[i]);
    }
    free(name);
    
    return 0;
}