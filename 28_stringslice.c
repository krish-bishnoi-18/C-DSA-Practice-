#include <stdio.h>
#include <string.h>
char* slice( char wholename[] , int m , int n) { 
    wholename[n]='\0';
    return &wholename[m];
        
}

int main() {
    printf("please entre the name of firt person \n ");
    char name[100] ;
    gets(name);
    printf("please entre the surename of first person \n");
    char name1[100];
    gets(name1);
    strcat(name, " "); 
    strcat(name,name1);
    char name2[100];
    strcpy(name2,name);
    printf("please entre the name of second person\n");
    char name3[100];
    gets(name3);
    printf("please entre the surname of second person\n");
    char name4[100];
    gets(name4);
    strcat(name3, " ");
    strcat(name3,name4);
    char name5[100];
    strcpy(name5,name3);
    strcat(name2, " ");
    strcat(name2,name5);
    printf("%s",name2); 
    char wholename1 [100];
    char wholename2 [100];
    strcpy(wholename1,name2); 
    strcpy(wholename2,name2); 
    int a , b;
    scanf("%d %d",&a,&b);
    printf("%s",slice(wholename1,a,b));
    scanf("%d %d",&a,&b);
    printf("%s",slice(wholename2,a,b));
    return 0;
}