#include <stdio.h>
int main()
{
    int num;
    int count = 0;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d�� �Ҽ��Դϴ�.", num);
    }
    else
    {
        printf("%d�� �Ҽ��� �ƴմϴ�.", num);
    }

    printf("\n20204327 ���ְ�\n");
}