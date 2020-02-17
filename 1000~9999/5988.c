// https://www.acmicpc.net/problem/5988
// 제목: 홀수일까 짝수일까
#include <stdio.h>

int main(void) {
    int N;
    long long K;
    scanf("%d",&N);
    while(N--) {   
        scanf("%lld",&K);
        if (K%2==0)
            printf("even");
        else
            printf("odd");        
    }
}