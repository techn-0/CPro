#include <stdio.h>

int main(void)
{
    int j;

    for (int i = 1; i < 8; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        for (int k = 8; k > j; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}