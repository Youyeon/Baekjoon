// 2019년 13회 2번
#include <iostream>
using namespace std;

int fibo(int);

int main() {
	int n;
	cin >> n;
	cout << "계단의 수를 입력하시오 : 계단 오르는 방법의 수 : " << fibo(n);
	return 0;
}

int fibo(int n) {
	if (n==1)
		return 1;
	else if (n==2)
		return 2;
	else
		return fibo(n-1) + fibo(n-2);
}