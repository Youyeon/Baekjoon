// https://www.acmicpc.net/problem/14002
//제목: 가장 긴 증가하는 부분 수열 4
#include <stdio.h>

int main(void) {
	int A[1001]; //A: 수열
	int H[1001] = { 0, }; //H: 길이
	int P[1001]; //P: 전 값의 인덱스
	int MAX_list[1001]; //최대 부분 수열을 저장하는 배열
	int N, index;
	int max = 0;
	scanf("%d", &N); //수열의 크기
	A[0] = 0; //초기값
	for (int i = 1; i <= N; i++)
		scanf("%d", &A[i]);
	for (int i = 1; i <= N; i++)

		for (int j = 0; j < i; j++)
			if (A[j] < A[i] && H[i] < H[j] + 1) {
				H[i] = H[j] + 1;
				P[i] = j; //전 원소의 인덱스 저장
			}
	for (int i = 1; i <= N; i++)
		if (max < H[i]) {
			max = H[i]; //가장 긴 길이
			index = i;
		}
	int i = max;
	while (index != 0) { //index가 0이 될 때까지 탐색
		MAX_list[--i] = A[index];
		index = P[index];
	}
	printf("%d\n", max);
	for (int i = 0; i < max; i++)
		printf("%d ", MAX_list[i]);
}