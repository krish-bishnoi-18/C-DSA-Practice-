#include<stdio.h>
int main () {
    int a, b ;
    scanf("%d,%d",&a,&b);
    printf("the value of c is %d", a&&b);
    printf("the value of c is %d", a||b) ; 
    printf("th evalue of not a is %d",!(a+b)) ;
    if (a&&b){

        printf("both are true");
    }
    
}   