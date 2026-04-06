#include<stdio.h>
#include<string.h>
int main (){
    char name[]="krish ";
    printf("%d\n",strlen(name));
    char name2[14] ;
    strcpy (name2,name);
    printf("%s\n",name2); 
    char name3[] ="bishnoi ";
    char name4[15] ;
    scanf("%s",name4);
    strcat(name,name3);
    strcat(name,name4);
    printf("%s\n",name);
    strcmp("name","name2");
}