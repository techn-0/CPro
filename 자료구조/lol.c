#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++)
    {                // �迭�� ù ��° ��Һ��� �ڿ��� �� ��° ��ұ��� �ݺ�
        min_idx = i; // ���� �ε����� �ּҰ� �ε����� ����

        // i ������ ��ҵ� �߿��� �ּҰ��� ã��
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx]) // ���� �ּҰ����� ���� ���� ã�Ҵٸ�
                min_idx = j;           // �ּҰ� �ε����� ������Ʈ
        }

        // �ּҰ��� ���� ��ġ�� �̵�
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main()
{
    int arr[] = {9, 2, 5, 1, 7, 4, 8, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // �迭�� ���� ���
    int i;

    printf("���� �� �迭: ");
    for (i = 0; i < n; i++)
    { // ���� �� �迭 ���
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n); // ���� ���� �Լ� ȣ��

    printf("\n���� �� �迭: ");
    for (i = 0; i < n; i++)
    { // ���� �� �迭 ���
        printf("%d ", arr[i]);
    }

    return 0;
}
