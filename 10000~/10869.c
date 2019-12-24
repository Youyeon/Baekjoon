// https://www.acmicpc.net/problem/10869
// 제목: 사칙연산
#include <stdio.h>

int main(void) {
	int A,B;
	scanf("%d %d",&A,&B);
	printf("%d\n%d\n%d\n%d\n%d",A+B,A-B,A*B,A/B,A%B);
}