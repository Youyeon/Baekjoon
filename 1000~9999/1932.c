// https://www.acmicpc.net/problem/1932
//제목: 정수 삼각형
#include <stdio.h>

int A[500][500]; //숫자값
int B[500][500] = { 0, }; // 최적 경로의 값
int Max(int, int);

int main(void) {
	int N;
	int max = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		for (int j = 0; j <= i; j++)
			scanf("%d", &A[i][j]);
	for (int i = 0; i < N; i++)
		for (int j = 0; j <= i; j++)
			B[i][j] = A[i][j] + Max(B[i - 1][j - 1], B[i - 1][j]);
	for (int i = 0; i < N; i++)
		max = max > B[N - 1][i] ? max : B[N - 1][i];
	printf("%d", max);
}

int Max(int a, int b) {
	return a > b ? a : b;
}