
#include <stdio.h>
 
int main(void)
{
 
   // Variable declaration
   int a, b, temp;    
 
   printf("Enter two numbers a and b ");
   scanf("%d %d", &a, &b);
 
   // Swap logic
 
   temp = a;
   a = b;
   b = temp;
 
  printf("\n After swapping \na = %d\nb = %d\n", a, b);
  
  return 0;
 
}