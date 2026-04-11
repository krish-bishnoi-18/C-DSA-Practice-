#include <stdio.h>

int main() {
    int dsa[6];
    for (int i = 0; i <5; i++)
    {
     scanf("%d",&dsa[i]);
    }
   for (int  i = 4; i >=2; i--)
   {
     dsa[i+1]= dsa[i];
   }
   dsa[2] = 99;
   for (int i = 0; i < 5; i++)
   {
    printf("%d ",dsa[i]);
   }
    return 0;
}