#include <stdio.h>
int main() {
    int list[] = {2, 4, 2, 6, 2, 8};
    int search = 2, count = 0;
    for(int i = 0; i < 6; i++) {
        if(list[i] == search) {
            count++;
        }
    }
    printf("The number %d appeared %d times.", search, count);
    return 0;
}