// https://www.acmicpc.net/problem/1018
// 제목: 체스판 다시 칠하기
#include <iostream>
using namespace std;
char board[52][52];
int W_count(int, int);
int B_count(int, int);
int min(int, int);

char B_board[8][8] = {
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'}
};
char W_board[8][8]{
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'},
	{'W','B','W','B','W','B','W','B'},
	{'B','W','B','W','B','W','B','W'}
};

int main(void) {
	int N, M;
	int count = 100000000;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++)
			cin >> board[i][j];
	}
	for (int i = 0; i + 7 < N; i++) {
		for (int j = 0; j + 7 < M; j++) {
			char color = board[i][j];
			count = min(count, min(W_count(i,j),B_count(i,j)));
		}
	}
	cout << count << endl;
}

int W_count(int a, int b) {
	int count = 0;
	char c = board[a][b];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (board[a + i][b + j] != W_board[i][j])
				count++;
	return count;
}

int B_count(int a, int b) {
	int count = 0;
	char c = board[a][b];
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			if (board[a + i][b + j] != B_board[i][j])
				count++;
	return count;
}

int min(int a, int b) {
	return a < b ? a : b;
}