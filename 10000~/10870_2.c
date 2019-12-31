// https://www.acmicpc.net/problem/10870
// 제목: 피보나치 수 5
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int N;
    scanf("%d",&N);
    int* fibo = (int*)malloc(sizeof(int)*N+1);
    fibo[0]=0;
    fibo[1]=1;
    for (int i=2;i<=N;i++) 
        fibo[i]=fibo[i-1]+fibo[i-2];
    printf("%d",fibo[N]);
    return 0;
}