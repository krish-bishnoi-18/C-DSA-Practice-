#include <stdio.h>
int main() {
    float prices[] = {10.5, 5.99, 20.0, 15.75};
    float lookFor = 5.99;
    for(int i = 0; i < 4; i++) {
        if(prices[i] == lookFor) {
            printf("Price %.2f is available.", lookFor);
        }
    }
    return 0;
}