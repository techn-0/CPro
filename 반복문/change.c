#include <stdio.h>

int main()
{
    int n, is_prime;

    printf("Testing : ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        is_prime = 1;
        for (int k = 2; k < i; k++)
        {
            if (i % k == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1)
        {
            printf("%d ", i);
        }
    }
}