// https://www.acmicpc.net/problem/1924
// 제목: 2007년
#include <stdio.h>
int c_day(int);

int main(void) {
	int x, y;
	int day;
	char DAYS[7][4] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
	int total = -1;
	scanf("%d %d", &x, &y);
	for (int i = 1; i < x; i++)
		total += c_day(i);
	total += y;
	printf("%s", DAYS[total % 7]);
}

int c_day(int x) {
	int day;
	switch (x) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;
	default:
		day = 28;
	}
	return day;
}