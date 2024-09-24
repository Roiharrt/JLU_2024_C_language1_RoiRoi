#include<stdio.h>
#include<math.h>

int main() {

	float C;
	float F;
	scanf_s("%f", &C);
	F = 9.0 / 5.0 * C + 32;
	printf("%.3f", F);
	return 0;
}
