#include <stdio.h>

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside function: x=%d, y=%d\n", x, y);
    
}
void callbyvalue(int a ){
    printf("inside funtions a=%d\n",a);
}
void *callbyrefrence(int *a) { 
     *a =456;
    printf("inside funtiosn call by refrence a = %d\n",*a);
}

int main() {
    int a = 10, b = 20;
    swap(a, b);
    printf("Outside function: a=%d, b=%d\n", a, b); 
    callbyvalue(a);
    printf("outside funtions a = %d\n",a);
    callbyrefrence(&b);
    printf("outside funtion call by refrnecer %d",b);
    return 0;
}