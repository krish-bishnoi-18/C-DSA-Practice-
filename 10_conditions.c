#include<stdio.h>
int main () {
    printf("hi this is your boss\n tell me how many projects you have done\n");
    int projects ;
    scanf("%d", &projects);
    printf("congratulations you have got bonus for you %d  projects\n your intial salary was 2000 but now it will be %d\n" , projects,100*projects+2000) ;
    if(projects>3) {
        printf("we aprriciate your work for this much work for our company\n you will get more bonus for this which is 2000+%d+%d=%d\n",100*projects,20*projects,2000+120*projects );    
    int salary= 2000+120*projects ;
    if(salary>2500) {
    printf("your salary is %d \n clearly you will get a tax deduction as it is more that 2500 with the perecetage of 5 \n hence your new salary is %d-5 percentage of %d= %d ",salary,salary,salary,(salary * 95) / 100 );
    } 
    else {
        printf(" you will get not tax deduction on %d", salary );

    }  
    }
else {
    printf("thank you for your work you will get a salary of %d", 2000);
}
    float a ;
    scanf("%f",&a); 

    if(a>65.00){
        printf("you can drive and you are a senior citizen as yoyr age is %f",a);
    }
    else if (a>40) {
        printf("you can dirve and you are elder ") ;
    }
    else if (a>18){
        printf("you can dirve");
    }
    else  {

        printf("you cannt drive");
    }
    int a ,b ;
    scanf("%d %d", &a, &b) ;
    a>b?printf("a is greater "): printf("b is greater");
}