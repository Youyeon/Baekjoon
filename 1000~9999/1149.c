// https://www.acmicpc.net/problem/1149
// 제목: RGB거리 
#include <stdio.h>
int min(int, int);
int total_cost[1000][3]; //총 비용
int cost[1000][3]; //비용

int main(void) {
	int N; //집의 개수
	int min_cost = 10000000; //초기값
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
	total_cost[0][0] = cost[0][0];
	total_cost[0][1] = cost[0][1];
	total_cost[0][2] = cost[0][2];
	for (int i = 1; i < N; i++) {
		total_cost[i][0] = min(total_cost[i - 1][1], total_cost[i - 1][2]) + cost[i][0];
		total_cost[i][1] = min(total_cost[i - 1][0], total_cost[i - 1][2]) + cost[i][1];
		total_cost[i][2] = min(total_cost[i - 1][0], total_cost[i - 1][1]) + cost[i][2];
	}
	for (int i = 0; i < 3; i++) {
		if (total_cost[N - 1][i] < min_cost)
			min_cost = total_cost[N - 1][i];
	}
	printf("%d", min_cost);
}
int min(int a, int b) {
	return a < b ? a : b;
}