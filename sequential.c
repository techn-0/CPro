#include <stdio.h>

void sequentialSearch(int num[], int n, int key)
{
    int i = 0;
    printf("%d�� �˻��մϴ�\n", key);

    while (i < n && num[i] != key) // �迭�� ù ��° ��Һ��� ������ ��ұ��� �ݺ��Ͽ� �˻�
    {
        i++;
    }
    if (i < n) // �˻� ���� ��
    {
        printf("%d��° �˻� ����\n", i + 1);
    }
    else // �˻� ���� ��
    {
        printf("%d��° �˻� ����\n", i);
    }
}

int main()
{
    int num[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(num) / sizeof(int); // �迭�� ũ�� ���
    int vel;

    printf("���� �˻�\n");
    printf("�˻��� ���� �Է��ϼ���.\n");
    scanf("%d", &vel);

    sequentialSearch(num, n, vel); // ���� �˻� ����

    printf("20204327 ���ְ�");
}