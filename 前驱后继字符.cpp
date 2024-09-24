#include<stdio.h>

int main() {
	char letter;
	scanf_s("%c", &letter);
	char pletter = letter - 1;
	char lletter = letter + 1;
	printf("%c%c%c", pletter, letter, lletter);

	return 0;
}
