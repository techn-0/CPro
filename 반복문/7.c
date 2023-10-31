#include <stdio.h>

int main(void)
{
    int x, y, sum = 0;
    printf("시작정수: ");
    scanf("%d", &x);
    printf("종료정수: ");
    scanf("%d", &y);
    for (x; x <= y; x++)
    {
        sum += x;
    }
    printf("%d~%d, sum = %d\n", x, y, sum);
}