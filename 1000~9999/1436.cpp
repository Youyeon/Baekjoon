// https://www.acmicpc.net/problem/1436
// 제목: 영화감독 숌
#include <iostream>
#include <string>
using namespace std;

int main(void) {
	int count = 0, num=665;
	int N;
	cin >> N;
	while (num++) {
		string check = to_string(num);
		if (check.find("666")!=-1)
			count++;
		if (count == N) {
			cout << check;
			break;
		}
	}
}