#include <stdio.h>

int main()
{
    int n, pr;

    printf("어디찾을래?");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        pr = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                pr = 0;
                break;
            }
        }
        if (pr == 1)
            printf("%d  ", i);
    }
}