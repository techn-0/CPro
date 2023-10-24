#include <stdio.h>

int main()
{
    int x = 0, y = 1, n, sum = 0;
    printf("takahashi: na nini shi masuka? ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", x);
        sum = x + y;
        x = y;
        y = sum;
    }
}