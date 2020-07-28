// https://www.acmicpc.net/problem/10026
// 제목: 적록색약
#include <iostream>
#include <queue>
using namespace std;

int isValid(int, int);
int count_area(char c);
char area[100][100];
int N;

int main(void) {
	int count_Y, count_N; //Y는 적록색약O, N은 적록색약X
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) 
			cin >> area[i][j];
	count_N = count_area('N');
	count_Y = count_area('Y');
	cout << count_N << " " << count_Y;
	return 0;
}

int count_area(char c) { // R/G/B로 구분
	if (c == 'Y') { //적록색약이 있는 경우
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (area[i][j] == 'G')
					area[i][j] = 'R';
	}
	int colored[100][100] = { 0, };
	int count = 0, res=0; //count=그리드수, res=구역수
	queue<pair<int, int>> q; // 좌표 큐
	q.push({ 0,0 });
	colored[0][0] = 1;
	while (true) {
		if (q.empty()) { //한 색의 검사가 끝나면 새로운 색 push
			int flag = 0;
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					if (!colored[i][j]) {
						q.push({ i,j });
						colored[i][j] = 1;
						flag = 1;
						break;
					}
				}
			if (flag==1)
				break;
			}
		}
		while (!q.empty()) {
			pair<int, int> to = q.front();
			int a = to.first;
			int b = to.second;
			/* 좌표가 유효하고 + 검사하지 않았으며 + 큐 안에 있는 좌표의 색과 같으면*/
			if (isValid(a - 1, b) && !colored[a - 1][b] && area[a - 1][b] == area[a][b]) {//상
				q.push({ a - 1,b });
				colored[a - 1][b] = 1;
			}
			if (isValid(a + 1, b) && !colored[a + 1][b] && area[a + 1][b] == area[a][b]) {//하
				q.push({ a + 1,b });
				colored[a + 1][b] = 1;
			}
			if (isValid(a, b - 1) && !colored[a][b - 1] && area[a][b - 1] == area[a][b]) {//좌
				q.push({ a,b - 1 });
				colored[a][b - 1] = 1;
			}
			if (isValid(a, b + 1) && !colored[a][b + 1] && area[a][b + 1] == area[a][b]) {//우
				q.push({ a,b + 1 });
				colored[a][b + 1] = 1;
			}
			q.pop();
			count++;
			if (count == N * N)
				break;
		}
		res++;
		if (count == N * N)
			break;
	}
	return res;
}

int isValid(int a, int b) { //좌표의 유효성 검사
	return a >= 0 && a < N && b >= 0 && b < N;
}