#include <stdio.h>

int avarage(int a, int b) {
    int avrage = a / b;
    return avrage;
}

int factorial(int a) {
    if (a == 1 || a == 0) {
        return 1;
    }
    a = a * factorial(a - 1);
    return a;
}

int main() {
    printf("please enter the number of students here.....");

    int a;
    scanf("%d", &a);

    char studentnames[10][50];
    for (int i = 0; i < a; i++) {
        printf("please enter the name of %dth student ", i);
        scanf("%s", studentnames[i]);
    }

    printf("please enter the number of subjects ");
    int b;
    scanf("%d", &b);

    char subjectnames[10][50];
    for (int i = 0; i < b; i++) {
        printf("please enter the name of subject %d ", i);
        scanf("%s", subjectnames[i]);
    }

    int marks[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("please enter the marks of student %s in subject %s ", studentnames[i], subjectnames[j]);
            scanf("%d", &marks[i][j]);
        }
    }

  
    for (int i = 0; i < a; i++) {
        int sum = 0;                        
        for (int j = 0; j < b; j++) {
            sum = sum + marks[i][j];
        }
        int avaragenumber = avarage(sum, b);
        int factorialnumber = factorial(avaragenumber);
        printf("Student: %s  Average: %d  Factorial of average: %d\n",
               studentnames[i], avaragenumber, factorialnumber);
    }

    return 0;
}