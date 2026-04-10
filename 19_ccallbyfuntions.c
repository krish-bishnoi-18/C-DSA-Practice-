#include <stdio.h>
void call(int a ){
     a = 23 ;
}
void call2(int *a){
    *a=23;
}
int main() { 
    // Call by value function
    int a= 10 ;
    printf(" The value of a outside  the function is %d\n",a);
    call(a);
    printf(" The value of a inside the function is %d",a);
    // Call my reference
    printf(" The value of a outside the call by reference function is %d",a);
    call2(&a);
    printf(" The value of Inside the call by reference function is %d",a);
    return 0;
}