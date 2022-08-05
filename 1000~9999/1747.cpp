// https://www.acmicpc.net/problem/1747
// 제목: 소수&팰린드롬
#include <iostream>
#include <cstdlib> // for bool variable
#include <cmath> // for sqrt
#include <string> // for string
#include <algorithm> // for reverse

using namespace std;

bool isPrime(int N) {
	if (N == 1)
		return false;
	else if (N == 2)
		return true;
	else { // N >= 3
		int sqroot = sqrt(N); //round down
		for (int i = 2; i <= sqroot; i++) {
			if (!(N % i)) {
				return false;
			}
		}
		return true;
	}
}

bool isPalindrome(int N) {
	string s, s_r;
	s = to_string(N); //string
	s_r = s;
	reverse(s_r.begin(), s_r.end()); 
	return s == s_r;
}

int main(void) {
	int N;
	cin >> N; //input

	while (1) {
		if (isPrime(N) && isPalindrome(N)) {
			cout << N;
			break;
		}
		N++;
	}
}