#include <stdio.h>
main()
{
    int num, a = 0, b = 1;
    int sum = 0;
    printf("�� ��° �ױ��� ���ұ��? ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }

    printf("\n20204327 ���ְ�\n");
}