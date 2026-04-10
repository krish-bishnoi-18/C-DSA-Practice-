#include <stdio.h> 
struct emp 
{
    int id ;
    char name [50];
    float salary ;
};
void funtion( struct emp *e1){
    e1->salary = 300;
}

int main() {
    struct emp e1;
    struct emp *b;
    b = &e1;
    scanf("%d %s %f",&e1.id,e1.name,&e1.salary);
    funtion(&e1);
    printf("%f", e1.salary);
    return 0;
}