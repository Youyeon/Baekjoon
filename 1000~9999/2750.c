// https://www.acmicpc.net/problem/2750
// 제목: 수 정렬하기
// 시간 복잡도 O(n^2)인 정렬 알고리즘 사용, 선택정렬
#include <stdio.h>
#include <stdlib.h>
#define SWAP(a,b,t) {(t)=(a);(a)=(b);(b)=(t);};

void selection_sort(int*,int);

int main(void) {
    int N;
    scanf("%d",&N);
    int* nums = (int*)malloc(sizeof(int)*N);
    for (int i=0;i<N;i++) 
        scanf("%d",&nums[i]);
    selection_sort(nums,N);
    for (int i=0;i<N;i++) 
        printf("%d\n",nums[i]);
}

void selection_sort(int* nums,int N) {
    int t,least;
    for (int i=0;i<N-1;i++) {
        least=i;
        for (int j=i+1;j<N;j++)
            if (nums[j]<nums[least])
                least=j;
        SWAP(nums[i],nums[least],t);
    }
}