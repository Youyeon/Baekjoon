// https://www.acmicpc.net/problem/2743
// 제목: 단어 길이 재기
#include <stdio.h>

int main(void) {
    char str[110];
    int i=0, count=0;
    scanf("%s",&str);
    while(str[i++]!='\0')
        count++;
    printf("%d",count);
}