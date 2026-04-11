#include <stdio.h>

int main() {
    int dsa[5];
    for (int i = 0; i < 4; i++)
    {
     scanf("%d",&dsa[i]);
    }
    for (int i = 4; i >=2; i--)
    {
        dsa[i+1]=dsa[i];
    }
    dsa[2]=34;
    for (int i = 0; i < 5; i++)
    {
        printf("%d  ",dsa[i]);
    }

    return 0;
}