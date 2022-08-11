// https://www.acmicpc.net/problem/1920
// 제목: 수 찾기
#include <stdio.h>
#include <algorithm>
int find(int,int);
int A[100000];

int main(void) {
	int N, M, K;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
		scanf("%d", &A[i]);
	std::sort(A, A + N);
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%d", &K);
		printf("%d\n",find(K,N));
	}
}

int find(int K, int N) {
	int low = 0, high=N-1;
	while (low <= high) {
		int mid = (low + high) / 2;
		if (K == A[mid])
			return 1;
		else if (K < A[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (int)0;
}