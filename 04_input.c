#include<stdio.h>

int main () {
    printf("the name of student is ....\n");
    char c ;
    scanf(" %c",&c);
    printf("name of student is %c\n",c);
    
    printf("please enter the roll number of student......\n");
    int a ;
    scanf("%d", &a);
    printf("the roll number of student is %d\n",a);
    printf("the marks got by student is ....\n");
    
    float b ;
    scanf("%f",&b);
    printf("marks got by student is %f\n",b);
    
    int d;
    char f;
    float e;

    scanf("%d %c %f" ,&d ,&f, &e );
    printf("\nFinal Record:\nRoll: %d\nName: %c\nMarks: %f\n", d, f, e);
    
    return 0 ;
}