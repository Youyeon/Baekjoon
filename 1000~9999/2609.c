// https://www.acmicpc.net/problem/2609
// 제목: 최대공약수와 최소공배수
#include <stdio.h>

int main(void) {
    int N,M;
    int gcd;
    scanf("%d %d",&N, &M);
    int min = N<M?N:M;
    for (int i=min;i>=1;i--)
        if(N%i==0&&M%i==0) {
            gcd=i;
            break;
        }
        printf("%d\n%d",gcd,N*M/gcd);
}