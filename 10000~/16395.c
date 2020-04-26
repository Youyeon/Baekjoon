// https://www.acmicpc.net/problem/16395
//제목: 파스칼의 삼각형
#include <stdio.h>

int main(void) {
	int N, k;
	int nums[30][30] = { 0, }; //숫자들
	scanf("%d %d", &N, &k);
	for (int i = 0; i < N; i++) {
		nums[i][0] = 1;
		nums[i][i] = 1;
	}
	for (int i = 2; i < N; i++)
		for (int j = 1; j < N - 1; j++)
			nums[i][j] = nums[i - 1][j - 1] + nums[i - 1][j];
	printf("%d", nums[N - 1][k - 1]);
}