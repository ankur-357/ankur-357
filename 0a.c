#include<stdio.h>
int main(){
char c;
int a;
char str[100];
printf("Enter any integer:") ;
scanf("%d", &a);
printf("Entered integer is %d \n", a);

printf("Enter any string\n");
scanf("%s %s", &str, &str);
printf("Entered string is %s \n", str) ;
return 0;

}