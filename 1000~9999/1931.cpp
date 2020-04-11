// https://www.acmicpc.net/problem/1931
// 제목: 회의실배정
#include <stdio.h>
#include <algorithm>

typedef struct time {
	int begin; //시작 시간
	int end; //끝나는 시간
}time;
bool cmp(time, time);

int main(void) {
	int N;
	int count = 1; //회의의 개수
	time info[100000]; // 회의의 정보 배열

	scanf("%d", &N); //회의의 수
	for (int i = 0; i < N; i++)
		scanf("%d %d", &info[i].begin, &info[i].end);
	std::sort(info, info + N, cmp); //회의 배열 정렬
	int t = info[0].end;
	for (int i = 1; i < N; i++) {
		if (info[i].begin >= t) {
			count++;
			t = info[i].end;
		}
	}
	printf("%d", count);
}

bool cmp(time a, time b) {
	if (a.end == b.end) //끝나는 시간이 같은 경우
		return a.begin < b.begin; //시작 시간이 더 빠른 경우를 우선으로 함.
	else //다른 경우
		return a.end < b.end; //끝나는 시간이 빠른 경우를 우선으로 함.
}