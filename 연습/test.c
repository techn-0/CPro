#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    int i;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    i = ((a ^ 2) + (b ^ 2) + (c ^ 2) + (d ^ 2) + (e ^ 2)) % 10;

    printf("%d", i);
}