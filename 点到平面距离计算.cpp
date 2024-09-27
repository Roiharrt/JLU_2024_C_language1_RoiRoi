/*
题目编号 ：Exp01-Enhance01，GJBook3-02-11
题目名称：点到平面距离
题目描述：
从点（x, y, z ) 到平面 Ax+By+Cz+D=0 的距离 d 的公式。
编程序，输入点的坐标 x、y、z及平面方程系数 A 、B 、C 、D，计算并输出d。
提示：math.h头文件中包含fabs和sqrt函数分别用来求解绝对值和平方根。
输入：从键盘随机第一行输入一个三维点坐标，第二行依次读入直线方程系数A、B、C和D。
输出：输出对应的点到面的距离，保留小数点后3位。
*/





#include <stdio.h>
#include <math.h>

int main() {
	float x, y, z, A, B, C, D;
	float d;
	scanf_s("%f%f%f", &x, &y, &z);
	scanf_s("%f%f%f%f",&A,&B,&C,&D);
	d = fabs(A * x + B * y + C * z + D) / sqrtf(A*A + B*B + C*C);
	printf("%.3f", d);
}
