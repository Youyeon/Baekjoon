// https://www.acmicpc.net/problem/2753
// 제목: 윤년
#include <stdio.h>

int main(void) {
	int year;
	scanf("%d",&year);
	if (year%4==0&&(year%100!=0||year%400==0))
		printf("%d",1);
	else
		printf("%d",0);
}