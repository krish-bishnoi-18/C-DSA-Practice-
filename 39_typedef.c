#include <stdio.h>
typedef struct 
{
  int id ;
  char name [50];
  float salary  ;

} emp ;

int main() {
    emp e1,e2;
    scanf("%d %d %s %s %f %f ",& e1.id,&e2.id,e1.name,e2.name,&e1.salary,&e2.salary) ;
    printf("%d %d %s %s %f %f ", e1.id,e2.id,e1.name,e2.name,e1.salary,e2.salary);
    return 0;
}