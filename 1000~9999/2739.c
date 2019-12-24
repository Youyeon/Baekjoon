// https://www.acmicpc.net/problem/2739
// 제목: 구구단
#include <stdio.h>

int main(void) {
	int N;
	scanf("%d", &N);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d", N, i, N*i);
		if (i == 9)
			break;
		printf("\n");
	}
}