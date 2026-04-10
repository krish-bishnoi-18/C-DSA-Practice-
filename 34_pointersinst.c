#include <stdio.h> 
struct phone {
   int year;
   float modelnumber;
   char companyname[500] ;
 };
void*  funtion(struct phone *p1){ 
   p1->year = 34;
    printf("%d %f %s",p1->year,p1->modelnumber,p1->companyname);

}
 
int main() { 
    struct phone  p1 ;
    struct phone *pointer;
    pointer = &p1;
    printf("please entere the year number of phone and then modelnumber and then complany name \n") ;
    scanf("%d %f %s",&pointer->year,&pointer->modelnumber,pointer->companyname);
    funtion(&p1);

    return 0;
}