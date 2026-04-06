#include<stdio.h>
int main () {
    int a=3;
    int b=2;
    printf("%d\n",a*b);
    printf("please enter the value of lenght of recatngle\n");
    int lenght;
    scanf("%d",&lenght);
    printf("please enter the value of breath of rectangle\n");
    int breath;
    scanf("%d",&breath);
    printf("the area of recatngle is %d \n",lenght*breath );
    int radius=6;
    printf("the area of circle is %f \n", 3.14*radius*radius);
    printf("the area of circle with radius %d is %f \n",radius,3.14*radius*radius); 
    printf("please enter the radius of circle \n");
    int r ;
    scanf("%d",&r);
    printf("the area of circle is with radius %d is %f \n",r,3.14*r);
}