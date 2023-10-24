#include <stdio.h>

int main(void)
{
    int n, sum = 0;

    do
    {
        printf("numvvvvvv: ");
        scanf("%d", &n);
        sum += n;
    } while (n != 0);

    printf("numvvvvvv: %d", sum);
}