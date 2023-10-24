#include <stdio.h>
int main()
{
    int c;
    printf("==========\n");
    printf("F        C\n");
    printf("==========\n");
    for (int i = 0; i <= 60; i += 10)
    {
        printf("%d %6d\n", i, c = (i - 32) * 5 / 9);
    }
}