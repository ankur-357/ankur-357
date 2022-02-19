#include <stdio.h>
int main()
{
    int i, n;
    int sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum = i + sum;
            printf("\nSum: %d ", sum);
        }
    }

    return 0;
}