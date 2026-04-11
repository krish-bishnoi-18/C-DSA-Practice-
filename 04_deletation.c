#include <stdio.h>

int main() {
    int dsa[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&dsa[i]);
    }
    for (int i = 2; i < 4; i++)
    {
        dsa[i]=dsa[i+1];
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d  ",dsa[i]);
    }
  
    return 0;
}