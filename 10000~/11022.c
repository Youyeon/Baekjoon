// https://www.acmicpc.net/problem/11022
// 제목: A+B-8
#include <stdio.h>

int main(void) {
	int n, a, b;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i,a,b, a + b);
	}
}