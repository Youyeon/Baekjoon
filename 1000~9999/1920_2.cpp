// https://www.acmicpc.net/problem/1920
// 제목: 수 찾기

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    vector<int> v;
    int N, M, n;
    scanf("%d", &N);
    while(N--) {
        scanf("%d", &n);
        v.push_back(n);
    }

    sort(v.begin(), v.end());

    scanf("%d", &M);
    while(M--) {
        scanf("%d", &n);
        printf("%d\n", binary_search(v.begin(), v.end(), n));
    }
}