// https://www.acmicpc.net/problem/1916
//제목: 최소비용 구하기
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000000

int W[1002][1002]; //가중치 그래프
int distance[1002]; // 시작정점으로부터의 최단경로 거리
int found[1002]; //방문한 정점 표시
int choose(int); //인접정점 중 distance 값이 최소인 정점 반환
void dijkstra(int, int);

int main(void) {
	int N, M, u, v, w;
	int begin, end; //출발, 도착 도시 번호
	scanf("%d", &N); //도시의 개수
	scanf("%d", &M); //버스의 개수
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++) {
			if (i == j)
				W[i][i] = 0;
			else
				W[i][j] = MAX;
		} //초기화
	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &u, &v, &w );//출발도시의번호, 도착도시의번호, 버스비용
		W[u][v] = w < W[u][v] ? w : W[u][v];
	}
	scanf("%d %d", &begin, &end);
	dijkstra(begin, N);
	printf("%d", distance[end]);
}

int choose(int N) {
	int min = MAX; //초기화
	int minpos = -1; //초기화
	for (int i=1;i<=N;i++)
		if (distance[i] < min && !found[i]) {
			min = distance[i];
			minpos = i;
		}
	return minpos;
}

void dijkstra(int begin, int N) {
	for (int i = 1; i <= N; i++) {
		distance[i] = W[begin][i];
		found[i] = 0;
	} //초기화
	found[begin] = 1;
	distance[begin] = 0;
	for (int i = 1; i <= N-2; i++) {
		int u = choose(N); // 선택된 정점들의 집합에서 가장 가까운 u 찾기
		found[u] = 1;
		for (int w = 1; w <= N; w++) //u에 인접한 w들의 distance 재계산
			if (!found[w])
				if (distance[u] + W[u][w] < distance[w])
					distance[w] = distance[u] + W[u][w];
	}
}
