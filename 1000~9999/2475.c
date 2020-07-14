// https://www.acmicpc.net/problem/2475
// 제목: 검증수
#include <stdio.h>

int main(void) {
    int num;
    int sum=0;
    for (int i=0;i<5;i++) {
        scanf("%d", &num);
        sum+=num*num;
    }
    printf("%d",sum%10);
}