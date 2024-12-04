#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int p, m;
	int room[300][300];
	int level[500];
	char name[300][17];
	int room_cnt = 0;
	int room_size[300] = { 0 };

	scanf("%d %d", &p, &m);
	for (int i = 0; i < p; i++) {
		scanf("%d %s", &level[i], &name[i]);
	}

	for (int i = 0; i < p; i++) {
		int placed = 0;
		for (int j = 0; j < room_cnt; j++) {
			if (room_size[j] < m && level[room[j][0]] - 10 <= level[i] && level[i] <= level[room[j][0]] + 10) {
				room[j][room_size[j]++] = i;
				placed = 1;
				break;
			}
		}
		if (!placed && room_cnt < 300) {
			room[room_cnt][0] = i;
			room_size[room_cnt++] = 1;
		}
	}

	for (int i = 0; i < room_cnt; i++) {
		if (room_size[i] == m) {
			printf("Started!\n");
		}
		else {
			printf("Waiting!\n");
		}

		for (int j = 1; j < room_size[i]; j++) {
			for (int k = j; k > 0; k--) {
				if (strcmp(name[room[i][k - 1]], name[room[i][k]]) > 0) {
					int temp = room[i][k];
					room[i][k] = room[i][k - 1];
					room[i][k - 1] = temp;
				}
			}
		}

		for (int j = 0; j < room_size[i]; j++) {
			printf("%d %s\n", level[room[i][j]], name[room[i][j]]);
		}
	}
}