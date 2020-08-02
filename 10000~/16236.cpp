// https://www.acmicpc.net/problem/16236
// 제목: 아기 상어
#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

int can_eat_fishes();
pair<int, int> neareast_from(int, int);
int isValid(int, int);

int area[20][20] = { 0, };
int moved[20][20]; //이동 횟수
int visited[20][20]; //방문 여부
int N;//공간의 크기
int B_size = 2; // 아기 상어의 크기

int main(void) {
	int second = 0;
	int cnt_eat = 0;
	int pos_x, pos_y; //아기 상어의 위치
	cin >> N;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			cin >> area[i][j];
			if (area[i][j] == 9) {
				pos_x = i;
				pos_y = j;
			}
		}
	while (can_eat_fishes()) {
		area[pos_x][pos_y] = 0;
		pair<int, int> neareast = neareast_from(pos_x, pos_y); //먹을 수 있는 물고기 중 가장 가까이 있는 물고기의 좌표, 지나야하는 칸
		pos_x = neareast.first;
		pos_y = neareast.second;
		second += moved[pos_x][pos_y];
		cnt_eat += 1;
		if (cnt_eat == B_size) {
			B_size += 1;
			cnt_eat = 0;
		}
		area[pos_x][pos_y] = 0;
	}
	cout << second << endl;
}

int can_eat_fishes () { //먹을 수 있는 물고기의 수
	int cnt = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			if (area[i][j] && area[i][j] < B_size)
				cnt++;
		}
	return cnt;
}

pair<int, int> neareast_from(int x, int y) {
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++) {
			moved[i][j] = 0; //초기화
			visited[i][j] = 0; //초기화
		}
	visited[x][y] = 1; //현재 아기 상어 위치
	pair<int, int> res;
	queue<pair<int, int>> q;
	q.push({ x,y });
	int near_x;
	int near_y;
	int dist = 400;
	/*시작*/
	while (!q.empty()) {
		pair<int, int> to = q.front();
		int x = to.first;
		int y = to.second;
		if (isValid(x - 1, y) && !visited[x-1][y] && area[x - 1][y] <= B_size) {
			moved[x - 1][y] = moved[x][y] + 1;
			visited[x - 1][y] = 1;
			q.push({ x - 1,y });
		}
		if (isValid(x + 1, y) && !visited[x + 1][y] && area[x + 1][y] <= B_size) {
			moved[x + 1][y] = moved[x][y] + 1;
			visited[x + 1][y] = 1;
			q.push({ x + 1,y });
		}
		if (isValid(x, y - 1) && !visited[x][y - 1] && area[x][y - 1] <= B_size) {
			moved[x][y - 1] = moved[x][y] + 1;
			visited[x][y - 1] = 1;
			q.push({ x,y - 1 });
		}
		if (isValid(x, y + 1) && !visited[x][y + 1] && area[x][y + 1] <= B_size) {
			moved[x][y + 1] = moved[x][y] + 1;
			visited[x][y + 1] = 1;
			q.push({ x,y + 1 });
		}
		q.pop();
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (area[i][j] && area[i][j]<B_size && visited[i][j] && moved[i][j] <= dist) { //물고기가 있고, 방문한 지점이면
				if (moved[i][j] < dist) { //이동거리가 더 적으면
					near_x = i;
					near_y = j;
					dist = moved[i][j];
				}
			}
		}
	}
	/*끝*/
	res = { near_x,near_y };
	return res;
}

int isValid(int a, int b) { //좌표의 유효성 검사
	return a >= 0 && a < N && b >= 0 && b < N;
}