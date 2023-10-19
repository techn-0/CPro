#include <stdio.h>

void selectionSort(int a[], int n)
{
    int i, j, k, min, temp;
    printf("\n\n선택정렬\n");

    for (i = 0; i < n - 1; i++) // i번 위치 요소 정렬하기위해 반복
    {
        min = i;                    // i를 현재 제일 작은 값으로 설정후 탐색 진행
        for (j = i + 1; j < n; j++) // i 이후 요소들과 비교
        {
            if (a[j] < a[min]) // 탐색중 최소값보다 작은값 발견시 해당값을 최소값으로
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp; // 최소값과 i번째 값의 위치를 바꿔줌

        printf("\n<%d 단계>\n", i + 1);
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

    printf("정렬 전 \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", num[i]);
    }

    selectionSort(num, size);
    printf("\n\n20204327 정휘건");

    getchar();
}