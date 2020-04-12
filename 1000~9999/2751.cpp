// https://www.acmicpc.net/problem/2751
// 제목: 수 정렬하기 2
#include <stdio.h>
#include <algorithm>

int main(void) {
	int N;
	int A[1000000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	std::sort(A, A + N);
	for (int i = 0; i < N; i++)
		printf("%d\n", A[i]);
}