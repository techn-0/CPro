#include <stdio.h>
main()
{
    int num, a = 0, b = 1;
    int sum = 0;
    printf("몇 번째 항까지 구할까요? ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }

    printf("\n20204327 정휘건\n");
}