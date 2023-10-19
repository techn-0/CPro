#include <stdio.h>

void bubbleSort(int a[], int n)
{
    int i, j, temp;
    printf("\n\n버블 정렬\n");

    for (i = 0; i < n - 1; i++) // 첫 번째 요소부터 마지막에서 두 번째 요소까지 반복하여 정렬 수행
    {
        for (j = 0; j < n - i - 1; j++) // 현재 패스에서 비교할 요소 범위 설정
        {
            if (a[j] > a[j + 1]) // 인접한 두 요소를 비교하여 순서가 반대이면 교환
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }

        printf("\n<%d 단계>\n", i + 1); // 정렬된 결과 출력
        for (int k = 0; k < n; k++)
        {
            printf("%d ", a[k]);
        }
    }
}

int main()
{
    int num[9] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(num) / sizeof(int); // 배열의 크기 계산

    printf("정렬 전\n");
    for (int i = 0; i < size; i++) // 정렬 전 배열 요소 출력
    {
        printf("%d ", num[i]);
    }

    bubbleSort(num, size); // 버블 정렬 수행
    printf("\n\n20204327 정휘건");
}