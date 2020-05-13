// https://www.acmicpc.net/problem/1753
//제목: 최단경로
#include <stdio.h>
#include <queue>
#define MAX 3000001
using namespace std;

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>> > pq;  //우선순위큐 <현재까지의 최단경로, 정점>
vector<pair<int, int>> W[MAX];
int dist[20002]; //최단경로
void dijkstra(int, int);

int main(void) {
	int N, M, u, v, w;
	int begin; //시작 정점의 번호
	scanf("%d %d", &N, &M); //정점, 간선의 개수 
	scanf("%d", &begin);
	for (int i = 1; i <= N; i++)
		dist[i] = MAX; //초기화
	for (int i = 0; i < M; i++) {
		scanf("%d %d %d", &u, &v, &w);//u에서 v로 가는 간선의 가중치 w
		W[u].push_back({ w, v });
	}
	dijkstra(begin, N);
	for (int i = 1; i <= N; i++) {
		if (dist[i] == MAX)
			printf("INF\n");
		else
			printf("%d\n", dist[i]);
	}
}

void dijkstra(int begin, int N) {
	dist[begin] = 0; //시작점
	pq.push({ 0, begin });
	while(!pq.empty()) {
		int v = pq.top().second; //현재 추가된 정점
		int vcost = pq.top().first;
		pq.pop();
		if (dist[v]< vcost)
			continue;
		for (int i = 0; i < W[v].size(); i++) {
			int n_cost = W[v][i].first;
			int n_node = W[v][i].second;
			if (dist[v] + n_cost < dist[n_node]) {
				dist[n_node] = dist[v] + n_cost; //가중치 값 갱신
				pq.push({ dist[n_node], n_node });
			}
		}
	}
}
