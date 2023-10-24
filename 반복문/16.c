#include <stdio.h>
int main()
{
    int n;
    printf("in put Z: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("NOOOOOOOOO");
        }
    }
    printf("Yes\n");
}