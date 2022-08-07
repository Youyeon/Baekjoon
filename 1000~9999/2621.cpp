// https://www.acmicpc.net/problem/2621
// 제목: 카드 게임

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int compare(pair<char, int> a, pair<char, int> b) { //ascending order
	return a.second < b.second;
}

int isSerial(vector<pair<char, int>>& cards) {
	for (int i = 0; i < 4; i++)
		if (cards[i].second + 1 != cards[i + 1].second)
			return 0;
	return 1;
}

int total_score(vector<pair<char, int>>& cards, int* cnt_c, int* cnt_n) {
	int res = 0;
	int tmp = 0;
	sort(cards.begin(), cards.end(), compare);

	if (isSerial(cards)) //cond 5
		res = 500 + cards[4].second;

	for (int i = 0; i < 5; i++) {
		if (cnt_c[i] == 5) {
			if (isSerial(cards)) // cond 1
				tmp = 900 + cards[4].second;
			else //cond 4
				tmp = 600 + cards[4].second;
		}
		res = res > tmp ? res : tmp;
	}

	for (int i = 0; i < 9; i++) {
		if (cnt_n[i] == 4) { // cond 2
			tmp = 800 + i + 1;
			res = res > tmp ? res : tmp;
		} else if (cnt_n[i] == 3) {
			tmp = 400 + i + 1;
			res = res > tmp ? res : tmp; // cond 6
			for (int j = 0; j < 9; j++) {
				if (cnt_n[j] == 2) { //cond 3
					tmp = 10 * (i + 1) + j + 1 + 700;
					res = res > tmp ? res : tmp;
					break;
				}
			}
		} else if (cnt_n[i] == 2) {
			tmp = 200 + i + 1;
			res = res > tmp ? res : tmp; //cond 8
			for (int j = i+1; j < 9; j++) {
				if (cnt_n[j] == 2) { //cond 7
					if (i > j)
						tmp = (i + 1) * 10 + (j + 1) + 300;
					else
						tmp = (j + 1) * 10 + (i + 1) + 300;
					res = res > tmp ? res : tmp;
					break;
				}
			}
		}
	}
	tmp = cards[4].second + 100; // cond 9
	res = res > tmp ? res : tmp;
	return res;
}

int main(void) {
	vector<pair<char, int>> cards;
	int cnt_c[4] = { 0, }; // R B Y G
	int cnt_n[9] = { 0, }; // 1~9
	char c;	int n;
	for (int i = 0; i < 5; i++) {
		cin >> c >> n;
		cards.push_back({ c, n });
		if (c == 'R') cnt_c[0] += 1;
		if (c == 'B') cnt_c[1] += 1;
		if (c == 'Y') cnt_c[2] += 1;
		if (c == 'G') cnt_c[3] += 1;
		cnt_n[n - 1] += 1;
	}
	cout << total_score(cards, cnt_c, cnt_n);
}