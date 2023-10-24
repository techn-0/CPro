#include <stdio.h>

int main()
{
    int n, is_prime;

    printf("Testing : ");
    scanf("%d", &n);

    int i = 2;
    while (i <= n)
    {
        is_prime = 1;
        int k = 2;
        while (k < i)
        {
            if (i % k == 0)
            {
                is_prime = 0;
                break;
            }
            k++;
        }
        if (is_prime == 1)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}