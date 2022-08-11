// https://www.acmicpc.net/problem/11724
// 제목: 연결 요소의 개수

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int all_visit(vector<int>& v) {
    int sum = 0;
    int N = v.size()-1;
    for (int i = 1; i <= N; i++) {
        sum += v[i];
    }
    if (sum == N)
        return 1;
    return 0;
}

int main(void) {
    int N, M, a, b;
    int ans = 0;
    stack<int> s;
    cin >> N >> M;

    if (M == 0) {
        cout << N;
        return 0;
    }

    vector<int> v(N+1); //visited nodes
    vector<vector<int>> arr(N+1); 
    for (int i = 0; i <= N; i++) {
        v[i] = 0;
        arr[i].resize(N+1);
    }
    v[0] = 1; //surplus

    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        arr[a][b] = 1; arr[b][a] = 1;
    }
    
    s.push(1); // start
    while (1) {
        while (!s.empty()) {
            int visit = s.top();
            v[visit] = 1;
            if (all_visit(v)) {
                cout << ans+1;
                return 0;
            }
            s.pop();
            for (int i = 1; i <= N; i++) {
                if (!v[i] && arr[visit][i]) {
                    s.push(i);
                }
            }
        }
        ans += 1;
        int i = 1;
        for (i = 1; i <= N; i++) {
            if (v[i] == 0) { //not visited
                s.push(i);
                break;
            }
        }
    }
}