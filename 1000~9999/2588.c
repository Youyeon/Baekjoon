// https://www.acmicpc.net/problem/2588
// 제목: 곱셈
#include <stdio.h>

int main(void) {
	int A,B;
	scanf("%d %d",&A,&B);
	printf("%d\n%d\n%d\n%d",A*(B%10),A*((B%100)/10),A*(B/100),A*B);
}