// https://www.acmicpc.net/problem/11866
// 제목: 요세푸스 문제 0
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) {
	int N, K;
	cin >> N >> K;
	int cnt = N, rem = 0;
	int* P = (int*)malloc(sizeof(int)*N);
	int* res = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
		P[i] = i + 1;
	for (int i = 0; i < N; i++) {
		rem = (rem + K - 1) % cnt;
		res[i] = P[rem];
		for (int j = rem; j < cnt - 1; j++)
			P[j] = P[j + 1];
		cnt--;
	}
	cout << "<";
	for (int i=0;i<N;i++) {
		if (i == N - 1)
			cout << res[i] << ">";
		else
			cout << res[i] << ", ";
	}
}