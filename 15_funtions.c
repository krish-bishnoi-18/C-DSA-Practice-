#include<stdio.h> 

int sum (int x , int y) {
    printf("%d\n", x*y);
    return x*y;
} 

int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("the value of this is %d", sum(x,y));
}