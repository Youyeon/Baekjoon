//// 19년 14회 9번
//#include <iostream>
//using namespace std;
//int triangle[100][100];
//
//int main(void) {
//	int max = 0;
//	int N;
//	cin >> N; //삼각형의 크기
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j <= i; j++) {
//			cin >> triangle[i][j];
//		}
//	}
//	for (int i = 1; i < N; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (i >= 2) {
//				if (j == 0) { //맨왼쪽
//					int max_now = triangle[i - 1][j] > triangle[i - 1][j + 1] ? triangle[i - 1][j] : triangle[i - 1][j + 1];
//					triangle[i][j] = triangle[i][j] + max_now;
//				}
//				else if (j == i) { //맨오른쪽
//					triangle[i][j] = triangle[i][j] + triangle[i - 1][j - 1];
//				}
//				else {
//					int max_now = triangle[i - 1][j - 1] > triangle[i - 1][j] ? triangle[i - 1][j - 1] : triangle[i - 1][j];
//					triangle[i][j] = triangle[i][j] + max_now;
//				}
//			}
//			else
//				triangle[i][j] = triangle[i][j] + triangle[0][0];
//		}
//	}
//	for (int i = 0; i < N; i++) {
//		max = max > triangle[N-1][i] ? max : triangle[N-1][i];
//	}
//	cout << max;
//}