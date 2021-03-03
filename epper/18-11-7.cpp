// 2018년 11회 C 7번
#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    float sum=0;
    cin >> n;
    int* num = (int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++)
        cin >> num[i];
    sort(num, num+n);
    sum=num[0];
    if (n>=2) {
        for (int j=1;j<n;j++)
            sum = (sum+num[j])/2;
    }
    printf("%.6f", sum);
}