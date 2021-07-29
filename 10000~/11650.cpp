// https://www.acmicpc.net/problem/11650
// 제목: 좌표 정렬하기
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> pos;
bool cmp(pair<int, int>,pair<int, int>);

int main(void) {
    int N;
    cin >> N;
    for(int i=0;i<N;i++) {
        int x, y;
        cin >> x >> y;
        pos.push_back({x,y});
    }
    sort(pos.begin(), pos.end(), cmp);
    for (int i=0;i<N;i++) {
        cout << pos[i].first << ' ' << pos[i].second << '\n';
    }
}

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}