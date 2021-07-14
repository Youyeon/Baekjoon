//// 19³â 14È¸ 3¹ø
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//	string A, B;
//	cin >> A >> B;
//	if (A.length() != B.length()) {
//		cout << "F";
//		return 0;
//	}
//	else {
//		for (int i = 0; i < A.length(); i++) {
//			A[i] = tolower(A[i]);
//			B[i] = tolower(B[i]);
//		}
//		sort(A.begin(), A.end());
//		sort(B.begin(), B.end());
//		for (int i = 0; i < A.length(); i++) {
//			if (A[i] != B[i]) {
//				cout << "F";
//				return 0;
//			}
//		}
//		cout << "T";
//		return 0;
//	}
//}