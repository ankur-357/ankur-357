#include <stdio.h>
float summation(int x);
int prime(int n);
int fact(int n);

int main()
{
    int a,num,res=0;
    printf("Enter number you want y upto: ");
    scanf("%d", &a);
    printf("Y = %f\n\n\n", summation(a));
    res = prime(a);
    if (res == 1)
    {
        printf("\n%d IS A PRIME NUMBER", a);
    }
    else
    {
        printf("\n%d IS NOT A PRIME NUMBER", a);
    }
    return 0;
}

float summation(int x)
{
    int i = 1;
    float sum = 0.0;
    while (i <= x)
    {
        sum = 1 + sum + ((i * i) / fact(i)); // sum = sum + (1.0 / (i*i) )
        i++;
    }
    return sum;
}

int fact(int n)
{
    if (n >= 1)
        return n * fact(n - 1);
    else
        return 1;
}

int prime(int y)
{
    int i;
    for (i = 2; i <= y-1; i++)
    {
        if (y % i == 0)
        return 0;
    }
    return 1;
}
