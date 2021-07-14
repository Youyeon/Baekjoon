// 19년 14회 10번
#include <iostream>
#include <string>
using namespace std;

char keyboard[4][8] = { {'*', '*', '*','A','B','C','D','E'},
						{'F', 'G','H','I','J','K','L','M'},
						{'N', 'O','P','Q','R','S','T','U'},
						{'V','W','X','Y','Z','*','*','*'}
					};
string dst[50];
char key[26];

int main(void) {
	int N; //목적지의 개수
	cin >> N;
	string mydst;
	for (int i = 0; i < N; i++)
		cin >> dst[i];

	cin >> mydst;
	int len = mydst.length();

	for (int i = 0; i < N; i++) {
		string s = dst[i];
		if (s.length() <= len)
			continue;
		else {
			int flag = 1;
			for (int j = 0; j < len; j++) {
				if (s[j] != mydst[j]) {
					flag = 0;
					break;
				}
			}
			if (flag) {
				char c = s[len];
				key[c - 'A'] = 1;
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 8; j++) {
			char c = keyboard[i][j];
			if (key[c-'A'])
				cout << c;
			else
				cout << "*";
		}
		cout << endl;
	}
}