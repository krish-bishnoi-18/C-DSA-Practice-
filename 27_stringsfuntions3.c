#include <stdio.h>
#include <string.h>
int main() {
    char name1[10] , name2 [50];
    gets(name1);
    gets(name2);
    if (strcmp(name1,name2)==0)
    {
        printf("both are names are  equal ");
    }
    else {
        printf("btoh aare dff");
    }
    
    return 0;
}
