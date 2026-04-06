#include<stdio.h>
int factorial(int n) { 
    if (n==0 || n == 1) {
        return 1 ;
    }
    return  factorial(n-1)*n;
}
int main () { 
    int a ;
scanf("%d",&a);
printf("the value of factorial of %d is %d",a,factorial(a));

}