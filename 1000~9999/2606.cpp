// https://www.acmicpc.net/problem/2606
// 제목: 바이러스

#include <iostream>
#include <vector>
using namespace std;

int cnt=0;

void DFS(vector<vector<int>>& arr, vector<int>& v, int x) {
	v[x] = 1;
	int sz = arr[x].size();
	for (int i = 0; i < sz; i++) {
		int node = arr[x][i];
		if (!v[node]) {
			DFS(arr, v, node);
			cnt += 1;
		}
	}
}

int main(void) {
	int N, M;
	cin >> N >> M;

	vector<vector<int>> arr(N);
	vector<int> visited(N);
	for (int i = 0; i < N; i++) {
		visited[i] = 0; //init
	}

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		arr[a - 1].push_back(b - 1);
		arr[b - 1].push_back(a - 1);
	}

	DFS(arr, visited, 0);
	cout << cnt;
}