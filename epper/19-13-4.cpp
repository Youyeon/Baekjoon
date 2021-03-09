// 19년 13회 4번
#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int X;
		cin >> X;
		int check = X % 100 / 10; //10ÀÇ ÀÚ¸®¼ö
		if (check >= 5)
			cout << X - (X % 100) + 100 << " " << X - (X % 100) << endl;
		else
			cout << X - (X % 100)<< " " << X - (X % 100) << endl;
	}
}
