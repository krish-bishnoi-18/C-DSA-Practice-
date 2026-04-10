#include <stdio.h>

int main() {
    int marks [5];
    int *a = &marks ;
    for (int  i = 0; i < 5; i++)
    {
       scanf("%d",a+i);
    }
    for (int  i = 0; i < 5; i++)
    {
        printf("%d",*(a+1)) ;
    }
    
    return 0;
}