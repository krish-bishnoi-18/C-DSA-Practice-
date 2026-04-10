#include <stdio.h>
int sawp (int a , int b ) {
    int temp = a;
    a=b;
    b=temp;
    printf("swaoped values are %d %d ",a,b);
}

int main() {
    int matrix[3][3];
   
    for ( int i = 0; i < 3; i++)
    {
     for ( int  j = 0; j < 3; j++)
     {
        scanf("%d",&matrix[i][j]);
     }
    } 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",matrix[i][j]);
        }
     
    } 
    int even =0 ;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j]%2==0)
            {
                even = even+1;
            } 
        }
    }
    
    int matrix2[even-1];
    for (int i , j= 0; j <even-1; j++)
    {
      matrix2[j]=matrix[i][j];
    }
    for (int i = 0; i < even-i; i++)
    {
        printf("%d",matrix2[i]);
    }
    int largest = matrix[0][0];
    for (int i = 0; i < 3; i++)
    {
     if ( (matrix[0][0]) < matrix[0][i] ){
         largest = matrix[0][i];
     }
    }
    int smaleest = matrix[2][0];
    for (int i = 0; i < 3; i++)
    {
        if (matrix[3][0]<matrix[3][i])
        {
          smaleest=matrix[3][0]  ;
        }
        
    }
    swap( largest,smaleest);
   
    return 0;
}