#include <stdio.h>

void bubbleSort(int a[], int n)
{
    int i, j, temp;
    printf("\n\n���� ����\n");

    for (i = 0; i < n - 1; i++) // ù ��° ��Һ��� ���������� �� ��° ��ұ��� �ݺ��Ͽ� ���� ����
    {
        for (j = 0; j < n - i - 1; j++) // ���� �н����� ���� ��� ���� ����
        {
            if (a[j] > a[j + 1]) // ������ �� ��Ҹ� ���Ͽ� ������ �ݴ��̸� ��ȯ
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }

        printf("\n<%d �ܰ�>\n", i + 1); // ���ĵ� ��� ���
        for (int k = 0; k < n; k++)
        {
            printf("%d ", a[k]);
        }
    }
}

int main()
{
    int num[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(num) / sizeof(int); // �迭�� ũ�� ���

    printf("���� ��\n");
    for (int i = 0; i < size; i++) // ���� �� �迭 ��� ���
    {
        printf("%d ", num[i]);
    }

    bubbleSort(num, size); // ���� ���� ����
    printf("\n\n20204327 ���ְ�");
}