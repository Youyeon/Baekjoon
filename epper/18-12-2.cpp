// 2018년 12회 2번
#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	cout << (n-1)/15+1 << " " << (n-1) % 15+1;
}