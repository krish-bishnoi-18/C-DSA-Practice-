#include <stdio.h>
 struct data {
    int carnumber;
    float distancetraveled;
    char carname[100];
 } c[5];
int main() {
     for (int  i = 0; i < 5; i++)
     {
        printf("please entre the carnumber of car %d",i+1);
        scanf("%d",&c[i].carnumber);
         printf("please entre the distance traveld  of car %d",i+1);
        scanf("%f",&c[i].distancetraveled);
         printf("please entre the name of car %d",i+1);
        scanf("%s",c[i].carname);
     } 
     for (int i = 0; i < 5; i++)
     {
        printf("data of your car %d\n number= %d , \n distencetravedl = %f \n , car name = %s",i,c[i].carnumber,c[i].distancetraveled,c[i].carname);
     }
     
     
    return 0;
}