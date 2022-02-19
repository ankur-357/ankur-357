#include<stdio.h>
int main(){
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (90>marks<=100)
    {
        printf("A+");
    }
    else if (80>marks<=90)
    {
        printf(marks);
    }
    else if (70>marks<=80)
    {
        printf("B+");
    }
    else if (60>marks<=70)
    {
        printf("B");
    }
    else if (50>marks<=60)
    {
        printf("C");
    }
        else if (marks<=50)
    {
        printf("F");
    }


return 0;   
}