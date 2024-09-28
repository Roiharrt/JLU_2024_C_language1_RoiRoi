#include<stdio.h>

int main() {
	float a, b, c,t;//必须采用一个临时变量用来调换a,b,c   不能直接输入“a=c”让一个变量给另一个 非空变量 赋值
	scanf_s("%f %f %f", &a, &b, &c);
	if (a >= b && a >= c) {
		t = a;
		a = c;
		c = t;
		if (c >= b) {
			t = c;
			c = b;
			b = t;
		}
	}
	if (a >= b && a <= c) {
		t = a;
		a = b;
		b = t;
	}
	if (a <= b && a <= c && c <= b) {
		t = b;
		b = c;
		c = t;
	}
	printf("%.1f %.1f %.1f", a, b, c);
}
