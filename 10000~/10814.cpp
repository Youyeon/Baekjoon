// https://www.acmicpc.net/problem/10814
// 제목: 나이순 정렬
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, string>, pair<int, string>); // 나이, 이름, 가입순서

int main(void) {
    vector<pair<int, string>> user;
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int age;
        string name;
        cin >> age >> name; //나이, 이름
        user.push_back({ age, name });
    }
    stable_sort(user.begin(), user.end(), cmp);

    for (int i = 0; i < N; i++) {
        cout << user[i].first << " " << user[i].second << '\n';
    }
}

bool cmp(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}