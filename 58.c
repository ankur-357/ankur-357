#include <stdio.h>
void func_1();
int a = 10; // declaring and initializing global variables
int b = 10;

// Global variable

void func__1()
{
    printf("From func_1() Global a = %d\n", a);
    printf("From func_1() Global b = %d\n\n", b);
}

int main()
{
    printf("Global a = %d\n", a);
    printf("Global b = %d\n\n", b);

    func_1();
    func_1();
    return 0;
}

// Static variable

void func_1()
{
    int a = 1;
    static int b = 100;
    printf("a = %d\n", a);
    printf("b = %d\n\n", b);
    a++;
    b++;
}
/* Local variable*/
void function_1()
{
    int a, b;
}

void function_2()
{
    printf("%d\n", a); // ERROR
}