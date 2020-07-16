// https://www.acmicpc.net/problem/1453
// 제목: 피시방알바
#include <stdio.h>

int main(void) {
    int N, seat_num;
    int count=0;
    int seat[101]={0,};
    scanf("%d",&N);
    for (int i=0;i<N;i++) {
        scanf("%d",&seat_num);
        if (!seat[seat_num])
            seat[seat_num]=1;
        else
            count++;
    }
    printf("%d",count);
}