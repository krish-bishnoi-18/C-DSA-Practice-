#include <stdio.h>
int main() {
    char letters[] = {'A', 'B', 'C', 'D'};
    char search = 'C';
    for(int i = 0; i < 4; i++) {
        if(letters[i] == search) {
            printf("Letter %c found at position %d.", search, i+1);
        }
    }
    return 0;
}