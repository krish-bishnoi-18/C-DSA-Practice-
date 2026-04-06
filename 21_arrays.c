#include<stdio.h>
int main (){
    int marks[5] ;
    for (int  k = 0; k < 5; k++)
    {
     scanf("%d",&marks[k]);
    }
    for (int  k = 0; k < 5; k++)
    {
        printf("marks[%d]=%d\n",k+1,marks[k]);
    }
    int a ,b ;
    scanf("%d%d",&a,&b);
    int marks2 [a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&marks2[i][j]);
        }
    }
    for (int i = 0; i < a; i++)
    {
     for (int j = 0; j < b; j++)
     {
        printf("%d  ",marks2[i][j]);
     }
     printf("\n");
     
    }
}