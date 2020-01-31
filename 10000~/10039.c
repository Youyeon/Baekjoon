// https://www.acmicpc.net/problem/10039
// 제목: 평균 점수
#include <stdio.h>

int main(void) {
    int score;
    int sum=0;
    for (int i=0;i<5;i++) {
        scanf("%d",&score);
        if (score<40)
            sum+=40;
        else
            sum+=score;
    }
    printf("%d",sum/5);
}