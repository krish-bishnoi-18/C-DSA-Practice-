#include <stdio.h>
struct emp 
{
 int id ;
 float salary ;
 char name [50] ;
};

 void empdetail(struct emp e1){
    printf("emply this %d %s %f ", e1.id , e1.name , e1.salary );
 }
int main() {
     struct emp e1 ;
     scanf("%s %d %f",e1.name,&e1.id,&e1.salary) ;
     empdetail(e1);
    return 0;
}