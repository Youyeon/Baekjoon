// 2020년 15회 7번
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int s[1000]; //희망시작시간
int e[1000]; //희망종료시간
int solution(int[], int[], int);
bool cmp_e(pair<int, int>, pair<int, int>);

vector<pair<int, int>> se;

int main(void) {
	// 끝나는 시간 기준으로 정렬 후 첫번째 학생이 끝난 시간과 가장 가까운 학생이 다음 자리를 맡음
	// 2번 반복 > 2자리에 대한 최대 학생수 계산 가능?
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		scanf("%d", &s[i]); //start time
	for (int i = 0; i < n; i++)
		scanf("%d", &e[i]); //end time
	cout << solution(s, e, n) << endl;
	return 0;
}

int solution(int s[], int e[], int n) {
	int answer = 0;
	int seat = 2;
	for (int i = 0; i < n; i++)
		se.push_back({ s[i], e[i] });
	sort(se.begin(), se.end(), cmp_e); //끝나는 시간 기준 정렬
	while (seat--) {
		int end_time = se[0].second; // end_time = 3
		answer++;
		se.erase(se.begin());
		while (1) {
			int i;
			int flag = 0;
			int min = 86400; // 희망종료시간 max
			int idx = 0;
			for (i = 0; i < se.size(); i++) {
				if (se[i].first < min && se[i].first >= end_time) {// 3 < 6
					min = se[i].first; // min = 3
					idx = i;
					flag = 1; // 다음 학생을 찾았다
				}
			}
			if (flag) {
				answer++;
				end_time = se[idx].second; //10
				se.erase(se.begin() + idx);
				flag = 0;
			}
			else {
				break; //한 의자에 앉을 학생을 모두 고른 경우
			}
		}
	}
	return answer;
}

bool cmp_e(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}
