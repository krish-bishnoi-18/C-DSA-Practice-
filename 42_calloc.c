#include <stdio.h>

int main() {
    int a ;
    scanf("%d",&a);
    char *name = (char*)calloc(a*sizeof(char)) ;
    for (int i = 0; i < a; i++)
    {
        printf("%c",name[i]) ;
    }
    
    return 0;
}