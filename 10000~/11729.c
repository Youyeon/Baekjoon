// https://www.acmicpc.net/problem/11729
// 제목: 하노이 탑 이동 순서
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void hanoi(int,int,int,int,int*);
int i=0;;

int main(void) {
    int N;
    scanf("%d",&N);
    int* moves=(int*)malloc(sizeof(int)*(pow(2,N)-1)*2);
    hanoi(N,1,2,3,moves);
    printf("%d\n", i/2);
    for (int j=0;j<i;j+=2) {
        printf("%d %d\n",moves[j],moves[j+1]);
    }
}

void hanoi (int n, int from, int aux, int to, int* moves) {
    if (n==1) {
        moves[i++]=from;
        moves[i++]=to;
    }
    else {
        hanoi(n-1,from,to,aux,moves);
        moves[i++]=from;
        moves[i++]=to;
        hanoi(n-1,aux,from,to,moves);
    }
}