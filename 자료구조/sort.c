#include <stdio.h>

void selectionSort(int a[], int n)
{
    int i, j, k, min, temp;
    printf("\n\n��������\n");

    for (i = 0; i < n - 1; i++) // i�� ��ġ ��� �����ϱ����� �ݺ�
    {
        min = i;                    // i�� ���� ���� ���� ������ ������ Ž�� ����
        for (j = i + 1; j < n; j++) // i ���� ��ҵ�� ��
        {
            if (a[j] < a[min]) // Ž���� �ּҰ����� ������ �߽߰� �ش簪�� �ּҰ�����
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp; // �ּҰ��� i��° ���� ��ġ�� �ٲ���

        printf("\n<%d �ܰ�>\n", i + 1);
        for (k = 0; k < n; k++)
        {
            printf("%d ", a[k]);
        }
    }
}

int main()
{
    int num[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(num) / sizeof(int);

    printf("���� �� \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }

    selectionSort(num, size);
    printf("\n\n20204327 ���ְ�");

    getchar();
}