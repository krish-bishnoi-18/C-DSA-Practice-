#include <stdio.h>
int main() {
    int ages[] = {18, 21, 25, 30};
    int check = 40, found = 0;
    for(int i = 0; i < 4; i++) {
        if(ages[i] == check) {
            found = 1;
        }
    }
    if(found == 1) printf("Age exists.");
    else printf("Age not found.");
    return 0;
}