// https://www.acmicpc.net/problem/10886
// 제목: 0 = not cute / 1 = cute
#include <stdio.h>

int main(void) {
    int count=0;
    int N,n;
    scanf("%d",&N);
    for (int i=0;i<N;i++) {
        scanf("%d",&n);
        if (n==0)
            count++;
    }
    if (count>N/2)
        printf("Junhee is not cute!");
    else
        printf("Junhee is cute!");
}