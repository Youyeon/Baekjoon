//// 2020�� 15ȸ 7��
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int s[1000]; //������۽ð�
//int e[1000]; //�������ð�
//int solution(int[], int[], int);
//bool cmp_e(pair<int, int>, pair<int, int>);
//
//vector<pair<int, int>> se;
//
//int main(void) {
//	// ������ �ð� �������� ���� �� ù��° �л��� ���� �ð��� ���� ����� �л��� ���� �ڸ��� ����
//	// 2�� �ݺ� > 2�ڸ��� ���� �ִ� �л��� ��� ����?
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		scanf("%d", &s[i]); //start time
//	for (int i = 0; i < n; i++)
//		scanf("%d", &e[i]); //end time
//	cout << solution(s, e, n) << endl;
//	return 0;
//}
//
//int solution(int s[], int e[], int n) {
//	int answer = 0;
//	int seat = 2;
//	for (int i = 0; i < n; i++)
//		se.push_back({ s[i], e[i] });
//	sort(se.begin(), se.end(), cmp_e); //������ �ð� ���� ����
//	while (seat--) {
//		int end_time = se[0].second; // end_time = 3
//		answer++;
//		se.erase(se.begin());
//		while (1) {
//			int i;
//			int flag = 0;
//			int min = 86400; // �������ð� max
//			int idx = 0;
//			for (i = 0; i < se.size(); i++) {
//				if (se[i].first < min && se[i].first >= end_time) {// 3 < 6
//					min = se[i].first; // min = 3
//					idx = i;
//					flag = 1; // ���� �л��� ã�Ҵ�
//				}
//			}
//			if (flag) {
//				answer++;
//				end_time = se[idx].second; //10
//				se.erase(se.begin() + idx);
//				flag = 0;
//			}
//			else {
//				break; //�� ���ڿ� ���� �л��� ��� �� ���
//			}
//		}
//	}
//	return answer;
//}
//
//bool cmp_e(pair<int, int> a, pair<int, int> b) {
//	if (a.second == b.second)
//		return a.first < b.first;
//	else
//		return a.second < b.second;
//}