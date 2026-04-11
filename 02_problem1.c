#include <stdio.h>

int main() {
    printf("the number of enttriis you want ");
    int i ;
    scanf("%d",&i);
    int dsa[i];
    for (int i = 0; i < i-1; i++)
    {
        scanf("%d",&i);
    }
    printf("please entre the entry in which you want to change a digit and aslo what number you wan tto entre in this ");
    int a , b ;
    scanf("%d %d",&a,&b);
    for (int i = i; i >= a-1; i++)
    {
        dsa[i+1]=dsa[i];
    }
    dsa[a] = b
;
for (int i = 0; i < i; i++)
{
    printf("%d",dsa[i]);
}
   return 0;
}