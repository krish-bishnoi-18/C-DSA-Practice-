#include <stdio.h>
int main() {
    int nums[] = {5, 10, 15, 20, 25};
    int target = 20, i;
    for(i = 0; i < 5; i++) {
        if(nums[i] == target) {
            printf("Found 20 at index %d", i);
            break;
        }
    }
    return 0;
}