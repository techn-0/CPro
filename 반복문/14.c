#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("in put n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    printf("sum: %d\n", sum);
}