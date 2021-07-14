// 2019년 14회 8번
// 실제 시험에서는 solution 함수를 사용한다는 점을 감안하고 풀이해주세요.
#include <iostream>
#include <queue>
using namespace std;

int box[1000][1000];
int N, M;
int day, no_ripe;
queue<pair<int, int>> q1, q2;
int isValid(int, int);
void adj(int, int);

int main() {
	cin >> M >> N;
	for (int i=0;i<N;i++) {
		for (int j=0;j<M;j++) {
			cin >> box[i][j];
			if (box[i][j]==1)
				q1.push({i,j});
			else if (box[i][j]==0)
				no_ripe++;
		}
	}
	if (no_ripe==0) { // 모두 익은 상태로 주어진 경우, 0 출력 > 프로그램 종료
		cout << 0;
		return 0;
	}

	while(1) {
		while(!q1.empty()) {
			pair<int, int> now = q1.front();
			q1.pop();
			adj(now.first, now.second);
		}
		if (q2.empty())
			break;
		day++;
		while(!q2.empty()) {
			pair<int, int> today_new = q2.front();
			q1.push(today_new);
			q2.pop();
		}
	}
	
	if (no_ripe==0) //모두 익지 못하는 경우
		cout << day;
	else
		cout << -1;
	return 0;
}

int isValid(int a, int b) {
	return a>=0 && b>=0 && a<N && b<M && box[a][b]!=-1;
}

void adj(int a, int b) {
	if (isValid(a-1, b) && box[a-1][b]==0) { //상
			box[a-1][b] = 1;
			q2.push({a-1, b});
			no_ripe--;
		}
	if (isValid(a+1, b) && box[a+1][b]==0) { //하
			box[a+1][b] = 1;
			q2.push({a+1, b});
			no_ripe--;
		}
	if (isValid(a, b-1) && box[a][b-1]==0) { //좌
			box[a][b-1] = 1;
			q2.push({a, b-1});
			no_ripe--;
		}
	if (isValid(a, b+1) && box[a][b+1]==0) { //우
			box[a][b+1] = 1;
			q2.push({a, b+1});
			no_ripe--;
		}
}