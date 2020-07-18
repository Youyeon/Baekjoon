// https://www.acmicpc.net/problem/5598
// 제목: 카이사르 암호
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'A')
			cout << 'X';
		else if (str[i] == 'B')
			cout << 'Y';
		else if (str[i] == 'C')
			cout << 'Z';
		else
			cout << (char)(str[i] - 3);
	}
}