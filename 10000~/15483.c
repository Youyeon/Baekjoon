// https://www.acmicpc.net/problem/15483
// 제목: 최소 편집
#include <stdio.h>
#include <string.h>

int min(int, int, int);
// 배열: stack overflow 방지를 위해 전역으로 선언
char A[2000]=" ";
char B[2000]=" ";
char tmp[2000] = " ";
int edit[2000][2000] = { 0, }; //편집 횟수

int main(void) {
	int n, m; //문자열 길이
	scanf("%s", tmp);
	strcat(A, tmp); //배열 인덱스를 밀어주기 위함
	scanf("%s", tmp);
	strcat(B, tmp); //배열 인덱스를 밀어주기 위함
	n = strlen(A) - 1; //A 문자열의 길이
	m = strlen(B) - 1; //B 문자열의 길이
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= m; j++) {
			if (j == 0)
				edit[i][j] = i;
			else if (i == 0)
				edit[i][j] = j;
			else {
				int t = (A[i] == B[j]) ? (int)0 : 1;
				edit[i][j] = min(edit[i - 1][j - 1] + t, edit[i - 1][j] + 1, edit[i][j - 1] + 1);
			}
		}
	printf("%d", edit[n][m]);
}

int min(int a, int b, int c) {
	int min = a;
	min = min < b ? min : b;
	min = min < c ? min : c;
	return min;
}