// https://www.acmicpc.net/problem/2741
// 제목: N 찍기
#include <stdio.h>
int main(void) {
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		printf("%d\n",(i+1));
	}
}