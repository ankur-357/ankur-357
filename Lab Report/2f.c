#include<stdio.h>
int main(){
float p,r,t,Si,Ci;
printf("Enter p,r,t: ");
scanf("%d %d %d", &p, &r, &t);
printf("Simple interest is: ");
Si=(p*r*t)/100 ;

printf("Compound interest is: ");
Ci = p*pow((1+r/100),t);

return 0;
}