// https://www.acmicpc.net/problem/1929
// 제목: 소수 구하기
#include <stdio.h>
#include <math.h>
int isPrime(int);

int main(void) {
    int M,N;
    scanf("%d %d",&M,&N);
    for (int i=M;i<=N;i++)
        if (isPrime(i))
            printf("%d\n", i);
}

int isPrime(int n) {
    if (n==1)
        return 0;
    else if (n==2)
        return 1;
    else {
        for (int i=2;i<=sqrt(n);i++)
            if (n%i==0)
                return 0;
    }
    return 1;
}