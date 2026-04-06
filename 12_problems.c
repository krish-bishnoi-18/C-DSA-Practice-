#include<stdio.h>
int main () {
    int income ;
    float tax ;
    printf("please entre your sallary\n");
    scanf("%d",&income);
    if (income<=250000) {
        tax=0;
     }
     else if (income<=500000&&income>250000) {
        tax=0.05*income ;
     }
     else if (income<=100000&&income<50000) {
        tax = 0.2*income ;
     }
     else if ( income>100000) {
        tax = 0.33*income ;
     }
     printf("you will pay %f tax",tax );
    printf("you will got %f", income - tax);
}