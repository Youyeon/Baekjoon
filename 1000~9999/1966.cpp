// https://www.acmicpc.net/problem/1966
// 제목: 프린터 큐
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int num[100];

int main(void) {
	int T;
	cin >> T;
	while(T--) {
		queue<pair<int, int>> q;
		int N, docu;
		int count = 0;
		cin >> N >> docu; //docu: 0, 1, 2, ..
		for (int j = 0; j < N; j++) {
			cin >> num[j];
			q.push({ j,num[j] });
		}
		sort(num,num+N);
		int index = N - 1;
		int max = num[index];
		while (1) {
			pair<int, int> now = q.front();
			int _now = now.first;
			int pri = now.second;
			if (pri < max) {
				q.pop();
				q.push({ _now,pri });
			}
			else {
				if (_now == docu) {
					count++;
					break;
				}
				q.pop();
				count++;
				max = num[--index];
			}
		}
		cout << count << endl;
	}
}