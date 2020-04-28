// https://www.acmicpc.net/problem/11404
//제목: 플로이드
#include <stdio.h>

int min(int, int);
const int INF = 20000000;

int main() {
	int n, m, a, b, c;
	int W[100][100];
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
				W[i][j] = INF;
	for (int i = 0; i < n; i++)
		W[i][i] = 0;
	for (int i = 0; i < m; i++) {
		scanf("%d %d %d", &a, &b, &c);
		W[a - 1][b - 1] = min(W[a - 1][b - 1], c);
	}
	for (int k = 0; k < n; k++)
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				W[i][j] = min(W[i][j], W[i][k] + W[k][j]);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (W[i][j] == INF) 
				W[i][j] = 0;
			printf("%d ", W[i][j]);
		}
		printf("\n");
	}
}

int min(int a, int b) {
	return a < b ? a : b;
}