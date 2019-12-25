// https://www.acmicpc.net/problem/2869
// 제목: 달팽이는 올라가고 싶다
#include <stdio.h>

int main(void) {
    int A,B,V;
    scanf("%d %d %d",&A, &B, &V);
    if(A==V)
        printf("%d",1);
    else if ((V-A)%(A-B)==0)
        printf("%d",(V-A)/(A-B)+1);
    else {
        printf("%d",(V-A)/(A-B)+2);
    }
}