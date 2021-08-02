// https://www.acmicpc.net/problem/1697
// 제목: 숨바꼭질
#include <iostream>
#include <queue>
using namespace std;

queue<pair<int, int>> q; // 위치, 초 pair
int visit[100001]; //위치 방문여부

bool isValid(int n) {
    return n >= 0 && n <= 100000 && !visit[n];
}

int main(void) {
    int N, K;
    int time=0;
    cin >> N >> K; // 수빈, 동생 위치
    q.push({ N, 0 }); // 최초 위치 push
    visit[N] = 1;

    while (!q.empty()) {
        int pos = q.front().first;
        int sec = q.front().second;
        visit[pos] = 1;
        q.pop(); // 방문
        if (pos == K) {
            time = sec;
            break;
        }
        int positions[] = { pos + 1, pos - 1, pos * 2 };
        for (int i = 0; i < 3; i++) {
            int pos_ = positions[i];
            if (isValid(pos_))
                q.push({ pos_, sec + 1 });
        }
    }
    cout << time;
}
