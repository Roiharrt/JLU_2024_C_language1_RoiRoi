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
