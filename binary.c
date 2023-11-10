#include <stdio.h>

int i;

// 이진 검색 함수
int binarySearch(int num[], int start, int end, int key)
{
    int mid;
    i++; // 검색 횟수 증가

    if (start == end) // 검색 범위에 하나의 요소만 남았을 때
    {
        if (key == num[start]) // 검색 값과 남은 요소가 일치하는지 확인
        {
            printf("%d번째 검색 성공\n", i);
        }
        else
        {
            printf("%d번째 검색 실패\n", i);
        }
    }
    else
    {
        mid = (start + end) / 2; // 중간 요소의 인덱스 계산

        if (key == num[mid]) // 검색 값과 중간 요소가 일치하는지 확인
        {
            printf("%d번째 검색 성공\n", i);
        }
        else if ((key < num[mid]) && (mid - 1 >= start)) // 검색 값이 중간 요소보다 작고, 왼쪽 반에 요소가 남아있을 때
        {
            binarySearch(num, start, mid - 1, key); // 왼쪽 반에서 재귀적으로 검색 수행
        }
        else if (key > num[mid] && (mid + 1 <= end)) // 검색 값이 중간 요소보다 크고, 오른쪽 반에 요소가 남아있을 때
        {
            binarySearch(num, mid + 1, end, key); // 오른쪽 반에서 재귀적으로 검색 수행
        }
        else
        {
            printf("%d번째 검색 실패\n", i);
        }
    }
}

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(num) / sizeof(int);
    int vel;

    printf("이진 검색\n");
    printf("검색할 값을 입력하세요.\n");
    scanf("%d", &vel);

    binarySearch(num, 0, n - 1, vel); // 이진 검색 수행
    getchar();
    return 0;
}
