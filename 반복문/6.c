#include <stdio.h>

int main(void)
{
    int n = 100;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("%d ", i);
    }
}