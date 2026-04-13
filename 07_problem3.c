#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50}; // Just a simple list of numbers
    int search, i, found = 0;

    printf("Enter the number you want to find: ");
    scanf("%d", &search);

    // Look at each number one by one
    for (i = 0; i < 5; i++) {
        if (a[i] == search) {
            printf("Found it! It's at position %d.\n", i + 1);
            found = 1; // Mark that we found it
            break;     // Stop looking
        }
    }

    if (found == 0) {
        printf("Not in the list.\n");
    }

    return 0;
}
