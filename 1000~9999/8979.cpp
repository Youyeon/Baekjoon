// https://www.acmicpc.net/problem/8979
// 제목: 올림픽

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct info_ {
    int nat;
    int G;
    int S;
    int B;
}info;

int compare(info A, info B) {
    if (A.G > B.G)
        return 1;
    else if (A.G == B.G) {
        if (A.S > B.S)
            return 1;
        else if (A.S == B.S) {
            if (A.B > B.B)
                return 1;
        }
    }
}

int main(void) {
    int N, K;
    cin >> N >> K;
    vector<info> medals(N);
    for (int i = 0; i < N; i++) {
        info now;
        cin >> now.nat >> now.G >> now.S >> now.B;
        medals[now.nat - 1] = now;
    } //init

    sort(medals.begin(), medals.end(), compare);

    if (medals[0].nat == K) {
        cout << 1; return 0;
    }

    int ranking = 1;
    info tmp = medals[0];
    vector<info> tmp_v = { tmp }; //init
    for (int i = 1; i < N; i++) {
        if (tmp.G == medals[i].G && tmp.S == medals[i].S && tmp.B == medals[i].B) { //tie
            if (medals[i].nat == K) {
                break;
            }
            tmp_v.push_back(medals[i]);
        } else {
            tmp = medals[i];
            ranking += tmp_v.size();
            if (medals[i].nat == K) {
                break;
            }
            tmp_v.clear();
            tmp_v.push_back(tmp);
        }
    }
    cout << ranking;
}