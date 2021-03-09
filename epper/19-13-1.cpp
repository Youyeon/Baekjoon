// 19년 13회 1번
#include <iostream>
using namespace std;

int main(void) {
	int sum = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		if (num % 2)
			sum += num;
	}
	cout << sum;
}
