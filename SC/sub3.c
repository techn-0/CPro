#include <stdio.h>
#include <math.h>
main()
{
    int a, b, c;
    double d, x1, x2;

    printf("????? ???????: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b * b - 4 * a * c;

    if (d == 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        printf("\n??? %lf", x1);
    }
    else if (d > 0)
    {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("\n???б╞ ???: %lf\n", x1);
        printf("?ещ??? ???: %lf\n", x2);
    }
    else
    {
        printf("\n????? ????.\n");
    }
    printf("20204327 ?????\n");
    system("pause");
}