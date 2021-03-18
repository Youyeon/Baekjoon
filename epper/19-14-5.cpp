//// 19년 14회 5번
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//char head[100000]; // 게임에 사용할 단어 첫 글자
//
//typedef struct word {
//	char alphabet = NULL;
//	vector<pair<string, int>> str_arr; //str, cnt
//} word;
//vector<word> words;
//
//bool cmp(pair<string, int>, pair<string, int>);
//
//int main(void) {
//	for (int i = 0; i < 26; i++) {
//		word w;
//		w.alphabet = 'a' + i;
//		words.push_back(w);
//	}
//	int K, N; // K: 미리 주어지는 단어 개수, N: 게임에 사용할 단어 첫 글자 개수
//	cin >> K >> N;
//	for (int i = 0; i < K; i++) {
//		string s;
//		cin >> s;
//		char c = s[0]; //첫글자
//		int flag = 1;
//		// 입력된 string인 경우
//		for (int j = 0; j < words[c - 'a'].str_arr.size(); j++) {
//			string str = words[c - 'a'].str_arr[j].first;
//			if (s.compare(str)==0) {
//				words[c - 'a'].str_arr[j].second++;
//				flag = 0;
//				break;
//			}
//		}
//		// 처음 입력된 string인 경우
//		if (flag) { 
//			words[c - 'a'].str_arr.push_back({ s, 1 });
//		}
//	}
//	for (int i = 0; i < N; i++)
//		cin >> head[i];
//	for (int i = 0; i < N; i++) {
//		char now = head[i];
//		sort(words[now - 'a'].str_arr.begin(), words[now - 'a'].str_arr.end(), cmp);
//		cout << words[now - 'a'].str_arr[0].first << endl;
//		words[now - 'a'].str_arr[0].second--;
//		//head 배열에 있는 첫 글자들에 해당하는 단어 출력
//	}
//}
//
//bool cmp(pair<string, int> A, pair<string, int> B) {
//	if (A.second == B.second)
//		return A.first < B.first;
//	else
//		return A.second > B.second;
//}