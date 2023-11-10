#include <stdio.h>
#include <math.h>

float dist_2d(float x1, float y1, float x2, float y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

int main(void)
{
    float x1, x2, y1, y2;
    printf("ù��° ���� ��ǥ�� �Է��Ͻÿ�:(x, y)");
    scanf("%f %f", &x1, &y1);
    printf("�ι�° ���� ��ǥ�� �Է��Ͻÿ�:(x, y)");
    scanf("%f %f", &x2, &y2);
    printf("���� ������ �Ÿ��� %f�Դϴ�.\n", dist_2d(x1, y1, x2, y2));
}