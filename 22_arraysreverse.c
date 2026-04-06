#include <stdio.h>
void array( int marks[] , int n ) {
    for (int i = 0; i < n; i++)
    {
        printf("%d ",marks[i]);
    }
}
void reversearray(int marks [],int n ){ 
    int temp;
    for (int start = 0,  end = n-1; start < end; start++,end--)
    {
    temp = marks[start]; 
        marks[start] = marks[end]; 
        marks[end] = temp; 
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",marks[i]);
    }
    
}
int main() {
    int n ;
    scanf("%d",&n);
    int marks[n] ;
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&marks[i]);
    }
    array(marks,n);
    reversearray(marks, n);
    return 0;
}