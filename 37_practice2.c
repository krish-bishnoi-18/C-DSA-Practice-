#include <stdio.h>
  struct emp {
    int id ;
    float salary ;
    char name [50];
  };
int main() {
    printf(" Please enter the number of employees") ;
    int a ;
    scanf("%d",&a);
    struct emp e[a];
    struct emp *b;
    b=e;
    for(int i=0;i<a;i++){
        printf(" Please enter the id number of employee number %d",i);
        scanf("%d",&b[i].id);
        printf(" Please enter the id number of salary number %d",i);
        scanf("%f",&b[i].salary);
        printf(" Please enter the id number of name  number %d",i);
        scanf("%s",b[i].name );
    } 
    for (int i = 0; i <a; i++)
    {
        printf(" Daughter of the employee Number  %d is Name %s Id  %d Salary %f ",i,b[i].name,b[i].id,b[i].salary) ;
    
    }
    return 0;
}