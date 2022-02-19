#include <stdio.h>
float summation(int);
int fact(int n) {
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("Summation is: %f", summation(a));
    return 0;
}

float summation(int x)
{
    int i = 1;
    float sum = 0.0;
    while (i <= x)
    {
        sum += (fact(i) / 1 ); // sum = sum + (1.0 / (i*i) )
        i++;
    }
    return sum;
}
