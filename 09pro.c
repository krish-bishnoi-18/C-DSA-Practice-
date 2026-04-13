#include <stdio.h>
int main() {
    int grades[] = {85, 92, 70, 55, 100};
    int find = 70;
    for(int i = 0; i < 5; i++) {
        if(grades[i] == find) {
            printf("Grade %d found!", find);
        }
    }
    return 0;
}