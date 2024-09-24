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
