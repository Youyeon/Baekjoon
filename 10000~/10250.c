// https://www.acmicpc.net/problem/10250
// 제목: ACM 호텔
#include <stdio.h>

int main(void) {
    int T, H, W, N;
    scanf("%d", &T); //테스트 데이터 수
    for (int i=0;i<T;i++) {
        scanf("%d %d %d",&H, &W, &N);
        int A=N%H, B=N/H+1;
        if (N%H==0) {
            B=N/H;
            A=H;
        }           
        printf("%d",A*100+B);
    }
}