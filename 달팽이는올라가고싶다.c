#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);

	int d = (V - B - 1) / (A - B) + 1;

	printf("%d\n", d);


	return 0;
}