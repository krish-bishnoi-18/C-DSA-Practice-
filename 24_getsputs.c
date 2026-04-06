#include <stdio.h>

int main() {
    char name[50];
    gets(name);
    printf("%s",name);
    printf("hi");
    char name2[50]; 
    gets(name2);
    puts(name2);
    printf("hi");
    return 0;
}