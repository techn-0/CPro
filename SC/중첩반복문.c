#include <stdio.h>

main()
{
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%-3d ", j);
        }
        printf("\n");
    }
    system("pause");
}