// https://www.acmicpc.net/problem/10430
// 제목: 나머지
#include <stdio.h>

int main(void) {
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	printf("%d\n%d\n%d\n%d",(A+B)%C,(A%C+B%C)%C,(A*B)%C,(A%C*B%C)%C);
}