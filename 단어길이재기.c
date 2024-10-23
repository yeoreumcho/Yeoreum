#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char c[101];
	scanf("%s", &c);

	printf("%d", strlen(c));
	return 0;
}