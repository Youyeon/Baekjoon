// 19년도 13회 6번
#include <iostream>
using namespace std;

int subset[7];

int main(void) {
	int k;
	int cnt = 0;
	cin >> subset[0] >> subset[1] >> subset[2];
	cin >> k;
	subset[3] = subset[0] + subset[1];
	subset[4] = subset[0] + subset[2];
	subset[5] = subset[1] + subset[2];
	subset[6] = subset[3] + subset[2];
	for (int i = 0; i < 7; i++) {
		if (subset[i] == k)
			cnt++;
	}
	cout << cnt;
}