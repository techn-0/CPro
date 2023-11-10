#include <stdio.h>

void insertionSort(int a[], int n)
{
    int i, j, temp;

    printf("\n\n��������\n");

    for (i = 1; i < n; i++) // �迭�� �� ��° ��Һ��� �����Ͽ� ������ ����
    {
        temp = a[i]; // ���� ������ ��Ҹ� temp ������ ����
        j = i - 1;

        // temp�� �̹� ���ĵ� �κ� �迭�� ����
        while (j >= 0 && a[j] > temp) // temp���� ū ��Ҹ� ���������� �� ĭ�� �̵�
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp; // temp�� ������ ��ġ�� ����

        printf("\n<%d �ܰ�>\n", i);
        for (int k = 0; k < n; k++)
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

    insertionSort(num, size);

    getchar();
}
