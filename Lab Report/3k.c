#include<stdio.h>
int main(){
    int year;
    printf("Year input: ");
    scanf("%d", &year);
    if (year % 100==0)
    {
        if (year%400==0)
        {
            printf("Year is leap");
        }
        else
        {
            printf("Year is not leap");
        }   
    }
    else
    {
        if (year%4==0)
        {
            printf("Year is Leap");
        }
        else
        {
            printf("Year is not Leap");
        }
        
    }
    return 0;
}