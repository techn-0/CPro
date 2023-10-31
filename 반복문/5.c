#include <stdio.h>

int main(void)
{
    int n = 100;
    for (int i = 0; i <= n; i++)
    {
        if (i > 0 && i % 3 == 0)
            printf("%d ", i);
    }
}