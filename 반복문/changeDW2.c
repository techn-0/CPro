#include <stdio.h>

int main()
{
    int n, is_prime;

    printf("Testing : ");
    scanf("%d", &n);

    int i = 2; // 소수를 판별할 숫자를 초기화합니다.

    do
    {                 // 외부 do-while 루프: 주어진 숫자 n 이하까지 반복합니다.
        is_prime = 1; // 현재 숫자를 소수로 가정합니다.
        int k = 2;    // 나눌 숫자를 초기화합니다.

        if (i == 2)
        { // i가 2인 경우에는 소수로 간주하고 출력합니다.
            printf("%d ", i);
            i++;
            continue; // 다음 숫자로 바로 넘어갑니다.
        }

        do
        { // 내부 do-while 루프: 현재 숫자 i를 k로 나누는 반복문입니다.
            if (i % k == 0)
            {                 // 나누어 떨어지면 (소수가 아님)
                is_prime = 0; // is_prime을 0으로 설정합니다.
                break;        // 안쪽 반복문을 종료합니다.
            }
            k++; // k 값을 증가하여 다음 숫자로 나누어 봅니다.
        } while (k < i);

        if (is_prime == 1)
        {                     // is_prime이 1이면 (소수인 경우)
            printf("%d ", i); // 현재 숫자 i를 출력합니다.
        }
        i++;          // 다음 숫자로 이동합니다.
    } while (i <= n); // 외부 do-while 루프는 주어진 숫자 n 이하까지 반복합니다.

    return 0;
}
