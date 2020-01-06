// https://www.acmicpc.net/problem/1676
// 제목: 팩토리얼 0의 개수
#include <stdio.h>

int main(void) {
    int N;
    int count=0;
    scanf("%d",&N);
    for (int i=1;i<=N;i++) {
        int num=i;
        while(num%5==0) {
            count++;
            num/=5;
        }
    }
    printf("%d",count);
}