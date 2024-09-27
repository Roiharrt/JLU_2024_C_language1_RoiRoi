/*
题目编号 ：Exp01-Enhance02
题目名称：时间转换
题目描述：编程序，输入午夜后的某秒数，输出该秒的小时:分种:秒。
输入：从键盘输入秒数。
输出：秒数转换后的小时:分种:秒，其中小时、分钟、秒都都是两位整数，数位不足用零补充。

样例1：
输入:50000
输出：13:53:20
样例2：
输入：96
输出：00:01:36
*/





#include <stdio.h>

int main() {
	int scd, sc, mi, ho;
	scanf_s("%d", &scd);
	sc = scd % 60;
	scd = scd / 60;
	mi = scd % 60;
	scd = scd / 60;
	ho = scd % 24;
	printf("%02d:%02d:%02d", ho, mi, sc);
	return 0;
}
