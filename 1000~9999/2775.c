//https://www.acmicpc.net/problem/2775
//제목: 부녀회장이 될테야
#include <stdio.h>

	int main(void) {
	int T, k, n;
	int num[15][14]; //층-호수
	for (int i = 0; i < 14; i++)
		num[14][i] = i + 1;
	for (int i = 0; i < 15; i++)
		num[i][0] = 1;
	for (int i = 13; i >= 0; i--) {
		for (int j = 1; j < 15; j++) {
			num[i][j] = num[i + 1][j] + num[i][j - 1];
		}
	}
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &k, &n);
		printf("%d", num[15 - k - 1][n - 1]);
	}
}
