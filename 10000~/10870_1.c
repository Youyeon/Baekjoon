// https://www.acmicpc.net/problem/10870
// 제목: 피보나치 수 5
#include <stdio.h>
int fibo(int);

int main(void) {
    int N;
    scanf("%d",&N);
    printf("%d",fibo(N));
    return 0;
}

int fibo(int n) {
    if (n==1||n==2)
        return 1;
    else 
        return fibo(n-1)+fibo(n-2);
}