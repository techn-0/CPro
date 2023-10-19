#include <stdio.h>
main()
{
    int n;
    int sum = 0;

    printf("n의 값을 입력하시오: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum += i * i;
    }
    printf("%d\n", sum);

    printf("\n20204327 정휘건\n");
}