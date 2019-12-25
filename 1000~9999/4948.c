// https://www.acmicpc.net/problem/4948
// 제목: 베르트랑 공준
#include <stdio.h>
#include <math.h>
int isPrime(int);

int main(void) {
    int N;
    int count=0;
    while(1) {
        scanf("%d",&N);
        if(N==0)
            break;
        for (int i=N+1;i<=2*N;i++) {
          if (isPrime(i))
             count++;
         }
        printf("%d\n",count);
        count=0;
    }
    return 0;
}

int isPrime(int N) {
    if (N==1)
        return 0;
    else if (N==2)
        return 1;
    else {
        for (int i=2;i<=sqrt(N);i++) {
            if (N%i==0)
                return 0;
        }
    }
    return 1;
}