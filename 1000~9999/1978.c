// https://www.acmicpc.net/problem/1978
// 제목: 소수 찾기
#include <stdio.h>
#include <math.h>
int isPrime(int);

int main(void) {
    int N,num;
    int count=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&num);
        if(isPrime(num))
            count++;
    }
    printf("%d",count);
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
        return 1;
    }

}