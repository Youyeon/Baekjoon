// https://www.acmicpc.net/problem/11053
//제목: 가장 긴 증가하는 부분 수열
#include <stdio.h>

int main(void) {
	int A[1001]; //A: 수열
	int H[1001] = { 0, }; //H: 길이
	int N;
	int max = 0;
	scanf("%d", &N); //수열의 크기
	A[0] = 0; //초기값
	for (int i = 1; i <= N; i++)
		scanf("%d", &A[i]);
	for (int i = 1; i <= N; i++) {
		int max_h = 0;
		for (int j = 0; j < i; j++)
			if (A[j] < A[i])
				max_h = max_h > H[j] ? max_h : H[j];
		H[i] = max_h + 1;
	}
	for (int i = 1; i <= N; i++)
		max = max > H[i] ? max : H[i]; //가장 긴 길이
	printf("%d", max);
}