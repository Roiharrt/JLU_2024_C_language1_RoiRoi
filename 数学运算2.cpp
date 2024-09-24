#include <stdio.h>

int main() {
    int a, b;
    // 输入两个整数
    scanf("%d %d", &a, &b);
    // 计算和、差、积、商和余数
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;    // 注意：假设b不为0
    int remainder = a % b;    // 注意：假设b不为0

    // 输出结果
    printf("%d %d %d %d %d\n", sum, difference, product, quotient, remainder);
    return 0;
}
