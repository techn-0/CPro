#include <stdio.h>
main()
{
    int n;
    int sum = 0;

    printf("n�� ���� �Է��Ͻÿ�: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        sum += i * i;
    }
    printf("%d\n", sum);

    printf("\n20204327 ���ְ�\n");
}