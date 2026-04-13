#include <stdio.h>
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n, i;
    printf("Enter number to search: ");
    scanf("%d", &n);
    for(i = 0; i < 5; i++) {
        if(arr[i] == n) {
            printf("Number %d is in the list.", n);
            return 0; 
        }
    }
    printf("Not found.");
    return 0;
}