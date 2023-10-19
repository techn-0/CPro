#include <stdio.h>

void sequentialSearch(int num[], int n, int key)
{
    int i = 0;
    printf("%d를 검색합니다\n", key);

    while (i < n && num[i] != key) // 배열의 첫 번째 요소부터 마지막 요소까지 반복하여 검색
    {
        i++;
    }
    if (i < n) // 검색 성공 시
    {
        printf("%d번째 검색 성공\n", i + 1);
    }
    else // 검색 실패 시
    {
        printf("%d번째 검색 실패\n", i);
    }
}

int main()
{
    int num[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(num) / sizeof(int); // 배열의 크기 계산
    int vel;

    printf("순차 검색\n");
    printf("검색할 값을 입력하세요.\n");
    scanf("%d", &vel);

    sequentialSearch(num, n, vel); // 순차 검색 수행

    printf("20204327 정휘건");
}