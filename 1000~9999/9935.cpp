// https://www.acmicpc.net/problem/9935
// 제목: 문자열 폭발
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void) {
	vector<char> v;
	string str, bomb;
	cin >> str >> bomb;
	for (int i = 0; i < str.size(); i++) {
		v.push_back(str.at(i));
		if (v.size() < bomb.size())
			continue;
		if (v.at(v.size() - 1) == bomb.at(bomb.size() - 1)) {
			int flag = 1;
			for (int j = 2; j <= bomb.size(); j++) {
				if (v.at(v.size() - j) != bomb.at(bomb.size() - j)) { //폭발문자열이 아니므로
					flag = 0; //flag=0
					break;
				}
			}
			if (flag)  //폭발 문자열이 발견되면
				v.erase(v.end() - bomb.size(), v.end()); //삭제
		}
	}
	if (v.empty())
		cout << "FRULA" << endl;
	else
		for (int i = 0; i < v.size(); i++)
			cout << v.at(i);
}