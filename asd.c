#include<stdio.h>
int main (){
    int marks[5];
    for(int i=0; i <5;i++) {
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d",marks[i]);
    } 
    int a , b ;
    scanf("%d %d",&a,&b);
    int  mark[a][b];
    for (int i = 0; i < a ; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d",&mark[i][j]);
        }
        
    } 
    for (int  i = 0; i < a; i++) 
    {
       for (int j= 0; j < b; j++)
       {
        printf("%d",mark[i][j]);
       }
       
    }
   
}