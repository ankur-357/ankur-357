#include<stdio.h>
int main(){
int x,y;
float i;
printf("Input variables x,y & i: ");
scanf("%d %d %f", &x,&y,&i) ;
printf("Variable values : %d %d %f",x,y,i );
char full_name[25];
printf("Enter your full name: ");
gets(full_name);
printf("My full name is %s ",full_name);

return 0;
}