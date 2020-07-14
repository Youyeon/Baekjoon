// https://www.acmicpc.net/problem/10951
// 제목: A + B - 4
#include <stdio.h>
int main(void) {
	int A, B;
	while (scanf("%d %d", &A, &B) != EOF)
		printf("%d\n", A + B);
	return 0;
}