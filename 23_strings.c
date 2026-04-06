#include<stdio.h>
int main (){
    char names[6] = {'k','r','i', 's','h','\0'};
    for (int i = 0; i < 5; i++)
    {
        printf("%c",names[i]);
    }
    char name1[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&name1[i]);
    }
    for (int i = 0; i < 5; i++)
    {
     printf("%c",name1[i]);
    }
    char  name2[] = "krish";
    printf("%s",name2);
    char name3[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",name3);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%s",name3);
    }
    printf("please entre you name") ;
     char name[50];
     scanf("%s",name);
     printf("%s",name);
}