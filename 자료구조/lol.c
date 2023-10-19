#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;

    for (i = 0; i < n - 1; i++)
    {                // 배열의 첫 번째 요소부터 뒤에서 두 번째 요소까지 반복
        min_idx = i; // 현재 인덱스를 최소값 인덱스로 설정

        // i 이후의 요소들 중에서 최소값을 찾음
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx]) // 현재 최소값보다 작은 값을 찾았다면
                min_idx = j;           // 최소값 인덱스를 업데이트
        }

        // 최소값을 현재 위치로 이동
        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main()
{
    int arr[] = {9, 2, 5, 1, 7, 4, 8, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // 배열의 길이 계산
    int i;

    printf("정렬 전 배열: ");
    for (i = 0; i < n; i++)
    { // 정렬 전 배열 출력
        printf("%d ", arr[i]);
    }

    selectionSort(arr, n); // 선택 정렬 함수 호출

    printf("\n정렬 후 배열: ");
    for (i = 0; i < n; i++)
    { // 정렬 후 배열 출력
        printf("%d ", arr[i]);
    }

    return 0;
}
