// https://www.acmicpc.net/problem/11021
// 제목: A+B-7
#include <stdio.h>

int main(void) {
	int n,a,b;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf("%d %d",&a,&b);
		printf("Case #%d: %d\n",i,a+b);
	}
}