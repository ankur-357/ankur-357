#include <stdio.h>
int sum(int);
int main()
{
    int d;
    scanf("%d", &d);
    int c = sqr(d);
    printf("%d", c);
    return 0;
}
int sqr(int x)
{
    int z = x * x;
    return z;
}