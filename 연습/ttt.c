#define _crt_secure_no_warnings
#include <stdio.h>

long int fact(int);

int main()
{
    int n, result;
    printf("\n������ �Է��ϼ��� : ");
    scanf("%d", &n);
    result = fact(n); // �Է¹��� n ������ fact �Լ� ȣ��
    printf("\n\n %d�� ���丮���� %ld�Դϴ�.\n", n, result);
}
long int fact(int n)
{
    int value;
    if (n <= 1)
    {
        printf("\n fact(1) �Լ� ȣ��!");
        printf("\n fact(!)�� 1 ��ȯ");
        return 1;
    }
    else
    {
        printf("\n fact(%d) �Լ� ȣ��!", n);
        value = (n * fact(n - 1)); // ����Լ� ȣ�⹮
        printf("\n fact(%d) �� %ld ��ȯ!!", n, value);
        return value; // n!�� ȣ��
    }
}