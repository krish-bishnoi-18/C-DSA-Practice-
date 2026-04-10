#include <stdio.h>

int main() {
    int a = 12;
    printf("%d",a);
    int *b = &a; // Now the & Is added because it is showing the address of the Variable And the value store at the address of variable Is actually 12 I
    printf("%u",&a);
    printf("%u",b);
    // to pr Print the value of a 
    printf("%d",*b);
    printf("%d",*&a); 
    return 0;
}