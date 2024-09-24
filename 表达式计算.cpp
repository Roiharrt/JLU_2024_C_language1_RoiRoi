#include <stdio.h>
#include <math.h>
#define PI 3.1415926  // 定义 π，保留 7 位小数

int main() {

    float y;
    float a = 0.0;
    float x = 0;

    scanf_s("%f %f", &a,&x);
    y = sin(x) / (a * x) + fabs(cos((PI * x) / 2));
    printf("%.3f", y);  // 输出结果
  
    return 0;
}
