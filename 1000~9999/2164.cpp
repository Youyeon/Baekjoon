// https://www.acmicpc.net/problem/2164
// 제목: 카드2
#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	queue<int> q;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
		q.push(i);
	N -= 1;
	while (N--) {
		q.pop(); //제일 위 카드 버림
		int now = q.front(); //제일 위에 있는 카드
		q.pop(); //꺼내서
		q.push(now); //맨 밑으로 옮김
	}
	int res = q.front();
	cout << res;
}