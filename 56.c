#include <stdio.h>
int fact(int n);
int main()
{

    int n, r, e;
    float d;
    printf("Enter n:  ");
    scanf("%d", &n);
    printf("Enter r:  ");
    scanf("%d", &r);
    e = fact(r) * fact(n - r);
    d = fact(n) / e;
    printf("Permutation and combination is: %f", d);
    return 0;
}

int fact(int n)
{
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}
