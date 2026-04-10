#include <stdio.h>
void swap(int *a,int *b){
   int temp = *a;
   *a=*b;
   *b=temp;
}
int main() {
    int a =10,b=20;
    swap(&a,&b);
    printf(" The values of A and B after swapping is %d and %d",a,b);
    return 0;
}