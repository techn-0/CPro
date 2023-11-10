#include <stdio.h>
#include <math.h>

float dist_2d(float x1, float y1, float x2, float y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

int main(void)
{
    float x1, x2, y1, y2;
    printf("첫번째 점의 좌표를 입력하시오:(x, y)");
    scanf("%f %f", &x1, &y1);
    printf("두번째 점의 좌표를 입력하시오:(x, y)");
    scanf("%f %f", &x2, &y2);
    printf("두점 사이의 거리는 %f입니다.\n", dist_2d(x1, y1, x2, y2));
}