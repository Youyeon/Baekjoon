// 2020년 15회 5번
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	char chars[10000];
	char ans[5000];
	int cnt = 1;
	int j = 0;
	queue<int> q;
	cin >> chars;
	for (int i = 0; i < strlen(chars); i++) {
		q.push(chars[i]);
	}
	char now = q.front();
	q.pop();
	if (now == '1')
		ans[j++] = '1';
	while (1) {
		if (now == (char)q.front()) {
			cnt++;
		}
		else {
			ans[j++] = (char)('A' + cnt - 1);
			now = (char)q.front();
			cnt = 1;
		}
		q.pop();
		if (q.empty()) {
			ans[j++] = (char)('A' + cnt - 1);
			break;
		}
	}
	ans[j] = '\0';
	cout << ans << endl;
}
