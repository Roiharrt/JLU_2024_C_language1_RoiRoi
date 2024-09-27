/*
题目编号 ：Exp01-Basic04，GJBook3-02-05题目名称：五则运算题目描述：
编写程序，输入两个整数，分别求它们的和、差、积、商、余数并输出。
输入：
从键盘随机输入两个整数。题目保证测试数据符合要求。
输出：
依次为所输入的两个整数的和、差、积、商和余数5个整数， 数字之间以1个英文空格间隔。

样例1：
输入：10  3
输出：13 7 30 3 1
样例2：
输入：9  2
输出：11 7 18 4 1
*/





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
