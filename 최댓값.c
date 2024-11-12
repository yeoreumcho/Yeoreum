#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, y, a;
	int max = -1;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			scanf("%d", &a);
			if (max < a) {
				max = a;
				x = i;
				y = j;
			}
		}
	}
	printf("%d\n %d %d", max, x, y);
	return 0;
}