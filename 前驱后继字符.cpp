/*
题目编号：Exp01-Basic01，GJBook3-02-03
题目名称：前驱后继字符
题目描述：编写程序，输入一个大写字母，然后顺序输出该字母的前驱字母、该字母本身、它的后继字母，此题不考虑输入字母为‘A’和‘Z’的情况。
输入：从键盘输入任何一个不是‘A’或‘Z’的大写字母。题目已保证测试数据符合要求。
输出：所输入字母的前驱、本身和后继三个字母，字母间无间隔符号。

样例1：
输入：B
输出：ABC
样例2：
输入：W
输出：VWX
*/





#include<stdio.h>

int main() {
	char letter;
	scanf_s("%c", &letter);
	char pletter = letter - 1;
	char lletter = letter + 1;
	printf("%c%c%c", pletter, letter, lletter);

	return 0;
}
