// https://www.acmicpc.net/problem/11050
// 제목: 이항 계수 1
#include <stdio.h>
int fact(int);

int main(void) {
    int N,K;
    int res=1;
    scanf("%d %d",&N, &K);
    res=fact(N)/(fact(K)*fact(N-K));
    printf("%d",res);
}

int fact(int n) {
    int res=1;
    for (int i=1;i<=n;i++)
        res*=i;
    return res;
}