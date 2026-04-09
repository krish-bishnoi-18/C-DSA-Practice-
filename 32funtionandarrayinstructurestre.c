#include <stdio.h>
struct studentdata // this is name of struture 
{
    char name[50];
    int rollnumber;
    float marks;
};
void printingthedataofstudent( struct studentdata studentdata){ 
    printf("%s \n  %d \n %f",studentdata.name,studentdata.rollnumber,studentdata.marks) ;

}

int main() {
    printf("please entre the number of students those who want to store the data ") ;
    int a ;
    scanf("%d", &a);
    struct studentdata studentdata[a]; // this studentdata is naem of per data in structure whoe name is student data sodont confuse 
    for (int i = 0; i < a; i++)
    {
        printf("please entrte the name of student %d",i+1);
        scanf("%s",studentdata[i].name);
         printf("please entrte the rollnumber of student %d",i+1);
        scanf("%d",&studentdata[i].rollnumber);
         printf("please entrte the marks of student %d",i+1);
        scanf("%f",&studentdata[i].marks);   
    }
    for(int i = 0; i<a;i++)
    {
      printingthedataofstudent(studentdata[i]);
    }
    return 0;
}