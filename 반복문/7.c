#include <stdio.h>

int main(void)
{
    int x, y, sum = 0;
    printf("��������: ");
    scanf("%d", &x);
    printf("��������: ");
    scanf("%d", &y);
    for (x; x <= y; x++)
    {
        sum += x;
    }
    printf("%d~%d, sum = %d\n", x, y, sum);
}