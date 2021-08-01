// https://www.acmicpc.net/problem/1012
// 제목: 유기농 배추
#include <iostream>
using namespace std;

int x_[4] = { -1, 1, 0, 0 };
int y_[4] = { 0, 0, -1, 1 };

int ground[50][50]; // 땅
int check[50][50]; // 확인
int M, N; // 가로, 세로

bool isValid(int a, int b) {
	return a >= 0 && a < M&& b >= 0 && b < N;
}

void dfs(int a, int b) {
	check[a][b] = 1;
	for (int i = 0; i < 4; i++) {
		int x = a + x_[i];
		int y = b + y_[i];
		if (isValid(x, y) && ground[x][y] == 1 && !check[x][y])
			dfs(x, y);
	}
}

int main(void) {
	int T;// 테스트 케이스
	cin >> T;
	while (T--) {
		for (int i = 0; i < 50; i++) {
			for (int j = 0; j < 50; j++) {
				ground[i][j] = 0;
				check[i][j] = 0;
			}
		} // 배열 초기화

		int cnt = 0; // 배추흰지렁이 마리수
		int K; // 배추 개수
		cin >> M >> N >> K; // 가로, 세로,  배추 개수
		for (int i = 0; i < K; i++) {
			int X, Y; // 배추 위치
			cin >> X >> Y;
			ground[X][Y] = 1; // 배추
		}
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++) {
				if (ground[i][j] == 1 && !check[i][j]) {
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << '\n'; // 출력
	}
}