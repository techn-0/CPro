#include <stdio.h>
int main()
{
    int num;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\n%d�� ¦���Դϴ�.\n", num);
    }
    else
    {
        printf("\n%d�� Ȧ���Դϴ�.\n", num);
    }

    printf("20204327 ���ְ�\n");

    system("pause");
}