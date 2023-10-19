#define _crt_secure_no_warnings
#include <stdio.h>

long int fact(int);

int main()
{
    int n, result;
    printf("\n정수를 입력하세요 : ");
    scanf("%d", &n);
    result = fact(n); // 입력받은 n 값으로 fact 함수 호츨
    printf("\n\n %d의 팩토리얼은 %ld입니다.\n", n, result);
}
long int fact(int n)
{
    int value;
    if (n <= 1)
    {
        printf("\n fact(1) 함수 호출!");
        printf("\n fact(!)값 1 반환");
        return 1;
    }
    else
    {
        printf("\n fact(%d) 함수 호출!", n);
        value = (n * fact(n - 1)); // 재귀함수 호출문
        printf("\n fact(%d) 값 %ld 반환!!", n, value);
        return value; // n!값 호출
    }
}