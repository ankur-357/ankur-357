#include <stdio.h>
int sum(int);
int main()
{
    int d;
    scanf("%d", &d);
    int c = sum(d);
    printf("%d", c);
    return 0;
}
int sum(int x)
{
    int d = 0;
    if (x >= 2)
    {
        d = d + x;
        return x + sum(x-1);
    }
    else
    {
        d = d+x;
        return d;
    }
}