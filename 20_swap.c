#include<stdio.h>
void sawp(int *a, int *b){
    int temp ;
    temp = *a;
    *a=*b;
    *b=temp;
}
int main (){
    int a=12;
    int b=3;
    sawp(&a,&b);
    printf("the value of a  is %d and at b is %d", a,b);
}