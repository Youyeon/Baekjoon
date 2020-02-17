// https://www.acmicpc.net/problem/10987
// 제목: 모음의 개수
#include <stdio.h>
int main(void) {
    char word[120];
    int i=0,count=0;
    scanf("%s",&word);
    while(word[i]!='\0') {
        if (word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
            count++;
        i++;
    }
    printf("%d",count);
}