// https://www.acmicpc.net/problem/11653
// 제목: 소인수분해
#include <stdio.h>

int main(void) {
    int N;
    int i=2;
    scanf("%d", &N);
    if (N==1)
        return 0;
    else {
        while (N!=1) {
            if (N%i==0) {
                printf("%d\n", i);
                N=N/i;
            }
            else
                i++;
        }
    }
    return 0;
}