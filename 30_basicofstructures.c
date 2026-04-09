#include <stdio.h>
struct car {
    char brand[50];
    int year ;
    float price ;
} c1,c2;
int main() {
    printf("please entre the brnad name of car 1 ");
    scanf("%s",c1.brand) ;
    printf("p[lease ntre the year number of car 1 ]") ;
    scanf("%d",&c1.year);
    printf("please entre youtubethe rice of car 1 ") ;
    scanf("%f",&c1.price);
    printf("%s %d %.2f",c1.brand,c1.year,c1.price);
    printf("please entre the brnad name of car 2 ");
    scanf("%s",c2.brand) ;
    printf("p[lease ntre the year number of car 2 ]") ;
    scanf("%d",&c2.year);
    printf("please entre youtubethe rice of car 2 ") ;
    scanf("%f",&c2.price);
    printf("%s %d %.2f",c2.brand,c2.year,c2.price); 
    // we can also do this type off things also in a structure 
    // printf("please entre the brand year prince of car1 and then same for car 2 ");
    // scanf("%s %d %f %s %d %f", c1.brand,&c1.year,&c1.price,c2.brand,&c2.year,&c2.price);
    // printf(" this is the datd of both ares c1 and c2 both \n c1 brnad = %s year = %d price = %f \n c2 brnad = %s year = %d price = %f \n", c1.brand,c1.year,c1.price,c2.brand,c2.year,c2.price)
    return 0;
}