// https://www.acmicpc.net/problem/13752
// 제목: 히스토그램
#include <stdio.h>

int main(void) {
    int n,k;
    scanf("%d",&n);
    while(n--) {
        scanf("%d",&k);
        for (int i=0;i<k;i++)
            printf("=");
        printf("\n");
    }
}