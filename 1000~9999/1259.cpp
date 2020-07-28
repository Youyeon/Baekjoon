// https://www.acmicpc.net/problem/1259
// 제목: 팰린드롬 수
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	while (1) {
		int N;
		string res;
		cin >> N;
		if (N == 0)
			return 0;
		if (N < 10) //한자리수
			res = "no";
		else if (N < 100) { //두자리수
			if (N % 10 == N / 10)
				res = "yes";
			else
				res = "no";
		}
		else if (N < 1000) { //세자리수
			if (N % 10 == N / 100)
				res = "yes";
			else
				res = "no";
		}
		else if (N < 10000) { //네자리수
			if (N % 10 == N / 1000 && N % 100 / 10 == N % 1000 / 100)
				res = "yes";
			else
				res = "no";
		}
		else { //다섯자리수
			if (N % 10 == N / 10000 && N / 1000 % 10 == N % 100 / 10)
				res = "yes";
			else
				res = "no";
		}
		cout << res << endl;
	}
}