//// 19�� 14ȸ 6��
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//// y = -x+250
//int main(void) {
//	double half_tri = (double)250 * 250 /2; //�ﰢ�� ����
//	int x, y;
//	double x2, y2;
//	cin >> x >> y;
//	if (x == 0) { //y�� ��, ����
//		// �ٸ� ���� x�� ���� �ִٸ�
//		x2 = half_tri / y;
//		y2 = 0;
//		if (x2 < 0 || x2 > 250) { // �ٸ� ���� ���� ��
//			x2 = half_tri / (250 - y);
//			y2 = 250 - x2;
//		}
//	}
//	else if (y == 0) { // x�� ��
//		// �ٸ� ���� y�� ���� �ִٸ�
//		x2 = 0;
//		y2 = half_tri / x;
//		if (y2 < 0 || y2 > 250) {
//			y2 = half_tri / (250 - x);
//			x2 = 250 - y2;
//		}
//	}
//	else { //���� ��
//		if (x > 125) {
//			x2 = 0;
//			y2 = 250 - half_tri / x;
//		}
//		else {
//			y2 = 0;
//			x2 = 250 - half_tri / y;
//		}
//	}
//	printf("%.2f %.2f", x2, y2);
//}