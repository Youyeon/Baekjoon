//// 19�� 14ȸ 9��
//#include <iostream>
//using namespace std;
//int triangle[100][100];
//
//int main(void) {
//	int max = 0;
//	int N;
//	cin >> N; //�ﰢ���� ũ��
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j <= i; j++) {
//			cin >> triangle[i][j];
//		}
//	}
//	for (int i = 1; i < N; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (i >= 2) {
//				if (j == 0) { //�ǿ���
//					int max_now = triangle[i - 1][j] > triangle[i - 1][j + 1] ? triangle[i - 1][j] : triangle[i - 1][j + 1];
//					triangle[i][j] = triangle[i][j] + max_now;
//				}
//				else if (j == i) { //�ǿ�����
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