// https://www.acmicpc.net/problem/1181
// 제목: 단어 정렬
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.size() == b.size())
		return a < b;
	else
		return a.size() < b.size();
}

int main(void) {
	int N;
	vector<string> str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string word;
		cin >> word;
		str.push_back(word);
	}
	sort(str.begin(),str.end(), compare);

	cout << str[0] <<endl;
	for (int i = 1; i < str.size(); i++) {
		if (str[i] == str[i - 1])
			continue;
		cout << str[i] << endl;
	}
}