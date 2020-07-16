//  https://www.acmicpc.net/problem/7576
// 제목: 토마토
#include <stdio.h>
#include <queue>
using namespace std;
int isValid(int, int);
int box[1000][1000]; //상자 정보
int N, M;
int main(void) {
	int day = 0; //날짜
	int non_tomato = 0; // 익지 않은 토마토 수
	queue <pair<int,int>> q1,q2; // q1은 어제 익어 주변 토마토에 영향을 줄 수 있는 토마토, q2는 오늘 새롭게 익은 토마토
	scanf("%d %d", &M, &N); //M: 상자의 가로칸, N: 상자의 세로칸
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			scanf("%d", &box[i][j]);
			if (box[i][j] == 1)
				q1.push({ i, j });
			else if (box[i][j] == 0)
				non_tomato++;
		}
	while (true) {
		while (!q1.empty()) {
			pair<int, int> to = q1.front();
			q1.pop();
			int a = to.first;
			int b = to.second;
			if (isValid(a - 1, b) && box[a - 1][b] == 0) {
				box[a - 1][b] = 1;
				q2.push({ a - 1,b });
				non_tomato--;
			} //상
			if (isValid(a + 1, b) && box[a + 1][b] == 0) {
				box[a + 1][b] = 1;
				q2.push({ a + 1,b });
				non_tomato--;
			} //하
			if (isValid(a, b - 1) && box[a][b - 1] == 0) {
				box[a][b - 1] = 1;
				q2.push({ a,b - 1 });
				non_tomato--;
			} //좌
			if (isValid(a, b + 1) && box[a][b + 1] == 0) {
				box[a][b + 1] = 1;
				q2.push({ a,b + 1 });
				non_tomato--;
			} //우
		}		
		if (q2.empty()) //더이상 익을 수 있는 토마토가 없을 때
			break;
		day++; //하루 지남
		while (!q2.empty()) { //queue element 이동
			pair<int, int> to = q2.front();
			q1.push(to);
			q2.pop();
		}
	}
	if (non_tomato == 0)
		printf("%d", day);
	else
		printf("-1");
}

int isValid(int a, int b) {
	return a >= 0 && a < N && b >= 0 && b < M && box[a][b]!=-1;
}