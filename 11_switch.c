#include<stdio.h>
int main () {
    printf("please enter them number of month");
    int a ;
    scanf("%d", &a) ;
    switch (a+1)
    {
    case 1 :
    printf("this month is january");
        
        break;
        case 2 :
        printf("this months is feburary") ;
        break;
        case 3 :
    printf("this month is marhc");  
        break;
        case 4 :
        printf("this months is aprik") ;
        break;
        case 5 :
    printf("this month is may");  
        break;
        case 6 :
        printf("this months is june") ;
        break;
         case 7 :
    printf("this month is july");  
        break;
        case 8 :
        printf("this months is agust") ;
        break;
        case 9 :
    printf("this month is september");
        break;
        case 10 :
        printf("this months is octtobor") ;
        break;
        case 11 :
    printf("this month is nov");
        break;
        case 12 :
        printf("this months is dec") ;
        break;
    default:
        break;
    }
    char a ;
    scanf("%c",&a); 
    switch (a) {
    case 'a':
    printf("you got good marks ");
        break;
        case 'b' :
        printf("you are good ");
    }
    int c ;
    printf("please enter the makrs of the studnt ");
    scanf("%d",&c);
    char a ;
    if (a>=90&&a<100){
        c='a';
    }
    else if (a<90&&a>=80) {
        c='b';
    }

}