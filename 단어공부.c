#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char c;
	int i, max = 0, s[26] = { 0, };
	while (scanf("%c", &c) != EOF); {
		if (c >= 'a') c -= 32;
		s[c-'A']++;
	}
	for (i = 1; i < 26; i++) {
		max = s[i] > s[max] ? i : max;
	}
	for (i = 0; i < 26; i++) {
		if (i == max) continue;
		else if (s[i] == s[max]) {
			printf("?");
			return 0;
		}
	}
	printf("%c", max + 'A');

}