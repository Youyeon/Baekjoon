// https://www.acmicpc.net/problem/1652
// 제목: 누울 자리를 찾아라
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int N;
	int pos_r = 0, pos_c = 0;
	int row = 0, col = 0;
	cin >> N;
	cin.ignore(); // buf flush

	char** room = new char* [N+2]; // init
	for (int i = 0; i < N + 2; i++) {
		room[i] = new char[N + 2];
		if (i == 0 || i == N + 1) {
			for (int j = 0; j < N + 2; j++)
				room[i][j] = 'X';
		}
		else {
			room[i][0] = 'X'; room[i][N + 1] = 'X';
		}
	}

	for (int i = 1; i <= N; i++) { //input
		string line;
		getline(cin, line, '\n');
		for (int j = 1; j <= N; j++) {
			room[i][j] = line.at(j - 1);
		}
	}

	if (N == 1) {
		cout << "0 0";
		return 0;
	}

	for (int i = 1; i < N + 1; i++) {
		for (int j = 1; j < N + 2; j++) {
			//row check
			if (room[i][j] == 'X') {
				if (j - pos_r > 2) {
					row += 1;
				}
				pos_r = j;
			}
			// col check
			if (room[j][i] == 'X') {
				if (j - pos_c > 2) {
					col += 1;
				}
				pos_c = j;
			}
		}
		pos_r = 0; pos_c = 0;
	}

	cout << row << " " << col;
}