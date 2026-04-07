#include <stdio.h>

int main() {
    int a = 6 ;
    int* b = &a;
    int **c=&b;
    printf("the value of a is %d\n",a);
    printf("the value of a is %d\n",*&a);
    printf("the value of a is %d\n",*b);
    printf("the value of a is %d\n",**c);
    printf("the value of adress of a or the value of b is %p\n",&a);
    printf("the value of adress of a or the value of b is %p\n",b);
    printf("the vlaue of adress of a or the value of b is %p\n",*&b);
    printf("the vlaue of adress of a or the value of b is %p\n",*c);
    printf("the vlaue of adress of b or the value of c is %p\n",*&c);
    printf("the value of adress of b or the value of c is %p\n",c);
    printf("the value of adress of b or the value of c is %p\n",&b);
    printf("the value of adress of c is %p\n",&c);

    return 0;
}