#include<stdio.h>
int main(){
int a,b,c,sum; 
float average;
printf("Enter 3 numbers");
scanf("%d %d %d", &a, &b, &c) ;
sum=a+b+c;
printf("sum is %d", sum) ;
average=(a+b+c)/3;
printf("average of 3 numbers is", average) ;
return 0;

}