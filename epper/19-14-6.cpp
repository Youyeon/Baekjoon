//// 19년 14회 6번
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//// y = -x+250
//int main(void) {
//	double half_tri = (double)250 * 250 /2; //삼각형 면적
//	int x, y;
//	double x2, y2;
//	cin >> x >> y;
//	if (x == 0) { //y축 위, 원점
//		// 다른 점이 x축 위에 있다면
//		x2 = half_tri / y;
//		y2 = 0;
//		if (x2 < 0 || x2 > 250) { // 다른 점은 빗변 위
//			x2 = half_tri / (250 - y);
//			y2 = 250 - x2;
//		}
//	}
//	else if (y == 0) { // x축 위
//		// 다른 점이 y축 위에 있다면
//		x2 = 0;
//		y2 = half_tri / x;
//		if (y2 < 0 || y2 > 250) {
//			y2 = half_tri / (250 - x);
//			x2 = 250 - y2;
//		}
//	}
//	else { //빗변 위
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