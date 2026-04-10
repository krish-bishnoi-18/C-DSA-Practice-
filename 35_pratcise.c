#include <stdio.h>
struct employe
{
    int id ;
    float salary ;
    char name [50];
};

int main() { 
    printf(" Number of employee");
    int a ;
    scanf("%d",&a);
    struct employe men[a];
    for (int i=0;i<a;i++){
     printf(" Please enter The salary of employee number %d",i+1);
     scanf("%f",&men[i].salary);
     printf(" Please enter The id of employee number %d",i+1);
     scanf("%d",&men[i].id);
     printf(" Please enter The name  of employee number %d",i+1);
     scanf("%s",men[i].name);
    }
    for (int i = 0; i <a; i++)
    {
        printf(" Employee number %d , salary = %f , Name= %s,id = %d", i , men[i].salary,men[i].name,men[i].id );
    }
    
    return 0;
}