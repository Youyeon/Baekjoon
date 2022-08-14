// https://www.acmicpc.net/problem/2583
// 제목: 영역 구하기

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int M, N;
vector<pair<int, int>> adj = { {-1,0}, {1,0}, {0,-1}, {0,1} };

int isValid(int a, int b) {
	return a >= 0 && a < M && b >= 0 && b < N;
}

void DFS(int** arr, int** v, int a, int b, int* ans) {
	v[a][b] = 1;
	*ans += 1;
	for (int i = 0; i < 4; i++) {
		int a_ = a + adj[i].first;
		int b_ = b + adj[i].second;
		if (isValid(a_, b_) && !v[a_][b_] && !arr[a_][b_]) {
			DFS(arr, v, a_, b_, ans);
		}
	}
}

int main(void) {
	int K;
	cin >> M >> N >> K;
	vector<int> area; // answer
	int** arr = new int* [M]; //arr
	int** v = new int* [M]; //visited

	for (int i = 0; i < M; i++) {
		arr[i] = new int[N];
		v[i] = new int[N ];
		for (int j = 0; j < N; j++) { //init
			arr[i][j] = 0;
			v[i][j] = 0;
		}
	}

	for (int i = 0; i < K; i++) {
		int x_1, x_2, y_1, y_2;
		cin >> x_1 >> y_1 >> x_2 >> y_2;
		for (int x = x_1; x < x_2; x++) {
			for (int y = y_1; y < y_2; y++) {
				arr[M-y-1][x] = 1;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) { //init
			int ans=0;
			if (!v[i][j] && !arr[i][j]) {
				DFS(arr, v, i, j, &ans);
				area.push_back(ans);
			}
		}
	}

	sort(area.begin(), area.end());
	cout << area.size() << "\n";
	for (int i = 0; i < area.size(); i++)
		cout << area[i] << " ";
}