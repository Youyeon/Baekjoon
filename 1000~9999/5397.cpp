// https://www.acmicpc.net/problem/5397 
// 제목: 키로거
#include <iostream>
#include <stack>
#include <string>
using namespace std;
stack<char> s1, s2;

int main(void) {
	int N; //테스트 케이스 수
	cin >> N;
	while (N--) {
		string str;
		cin >> str;
		for (int i=0;i<str.size();i++) {
			char ch = str.at(i);
			if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z') || (ch >= '0'&&ch <= '9'))
				s1.push(ch);
			else if (ch == '-' && !s1.empty())
				s1.pop();
			else if (ch == '<' && !s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
			else if (ch == '>' && !s2.empty()) {
				s1.push(s2.top());
				s2.pop();
			}
		}
		while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}
		while (!s2.empty()) { //문자열 출력
			cout << s2.top();
			s2.pop();
		}
		cout << "\n";
	}
}