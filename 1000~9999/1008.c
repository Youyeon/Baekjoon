// https://www.acmicpc.net/problem/1008
// 제목: A/B
#include <stdio.h>

int main(void) {
	double A, B;
	scanf("%lf %lf", &A, &B);
	printf("%.9lf", (double)A / B);
}