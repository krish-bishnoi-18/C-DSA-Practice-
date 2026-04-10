#include <stdio.h>
union emp 
{
    int id ;
    char name [50];
    float salary;
};

int main() {
    union emp e1,e2,e3;
   scanf("%d %d",&e1.id,&e2.id);
   printf("%d %d",e1.id,e2.id);
    return 0;
}