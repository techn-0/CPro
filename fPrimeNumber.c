#include <stdio.h>

int check_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    for (int i = 2; i <= 100; i++)
    {
        if (check_prime(i) == 1)
        {
            printf("%d ", i);
        }
    }
}