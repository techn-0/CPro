#include <stdio.h>

int i;

// ���� �˻� �Լ�
int binarySearch(int num[], int start, int end, int key)
{
    int mid;
    i++; // �˻� Ƚ�� ����

    if (start == end) // �˻� ������ �ϳ��� ��Ҹ� ������ ��
    {
        if (key == num[start]) // �˻� ���� ���� ��Ұ� ��ġ�ϴ��� Ȯ��
        {
            printf("%d��° �˻� ����\n", i);
        }
        else
        {
            printf("%d��° �˻� ����\n", i);
        }
    }
    else
    {
        mid = (start + end) / 2; // �߰� ����� �ε��� ���

        if (key == num[mid]) // �˻� ���� �߰� ��Ұ� ��ġ�ϴ��� Ȯ��
        {
            printf("%d��° �˻� ����\n", i);
        }
        else if ((key < num[mid]) && (mid - 1 >= start)) // �˻� ���� �߰� ��Һ��� �۰�, ���� �ݿ� ��Ұ� �������� ��
        {
            binarySearch(num, start, mid - 1, key); // ���� �ݿ��� ��������� �˻� ����
        }
        else if (key > num[mid] && (mid + 1 <= end)) // �˻� ���� �߰� ��Һ��� ũ��, ������ �ݿ� ��Ұ� �������� ��
        {
            binarySearch(num, mid + 1, end, key); // ������ �ݿ��� ��������� �˻� ����
        }
        else
        {
            printf("%d��° �˻� ����\n", i);
        }
    }
}

int main()
{
    int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(num) / sizeof(int);
    int vel;

    printf("���� �˻�\n");
    printf("�˻��� ���� �Է��ϼ���.\n");
    scanf("%d", &vel);

    binarySearch(num, 0, n - 1, vel); // ���� �˻� ����
    getchar();
    return 0;
}
