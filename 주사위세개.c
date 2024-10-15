#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int A = 3;
	int B = 6;
	int C = 6;
	scanf("%d %d %d", &A, &B, &C);

	if (A == B) {
		if (A == C) {
			print("%d\n", 10000 + A * 1000);
		}
		else if (A != C) {
			printf("%d\n", 1000 + A * 100);
		}
	}
	else if (A != B) {
		if (B == C) {
			printf("%d\n",1000 + B * 100);
		}
		if (B != C) {
			if (A > B) {
				if (A > C) {
					printf("%d\n", A * 100);
				}
				else if (C > A) {
					printf("%d\n", C * 100);
				}
			}
			else if (B > A) {
				if (B > C) {
					printf("%d\n", B * 100);
				}
				else if (C > B) {
					printf("%d\n", C * 100);
				}
			}
			else if (C > A) {
				if (C > B) {
					printf("%d\n", C * 100);
				}
				else if (B > C) {
					printf("%d\n", B * 100);
				}
			}
		}
	}

	return 0;

}