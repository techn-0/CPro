#include <stdio.h>

void insertionSort(int a[], int n)
{
    int i, j, temp;

    printf("\n\n삽입정렬\n");

    for (i = 1; i < n; i++) // 배열의 두 번째 요소부터 시작하여 정렬을 수행
    {
        temp = a[i]; // 현재 삽입할 요소를 temp 변수에 저장
        j = i - 1;

        // temp를 이미 정렬된 부분 배열에 삽입
        while (j >= 0 && a[j] > temp) // temp보다 큰 요소를 오른쪽으로 한 칸씩 이동
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = temp; // temp를 적절한 위치에 삽입

        printf("\n<%d 단계>\n", i);
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

    printf("정렬 전 \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }

    insertionSort(num, size);

    getchar();
}
