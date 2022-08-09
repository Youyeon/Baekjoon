// https://www.acmicpc.net/problem/2816
// 제목: 디지털 티비

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    string ch;
    int pos_1=0, pos_2=0;

    for (int i = 0; i < N; i++) {
        cin >> ch;
        if (ch == "KBS1")
            pos_1 = i;
        else if (ch=="KBS2")
            pos_2 = i;
    }
    if (pos_2 < pos_1)
        pos_2 += 1;
    for (int i = 0; i < pos_1; i++)
        cout << "1";
    for (int i = 0; i < pos_1; i++)
        cout << "4";
    for (int i = 0; i < pos_2; i++)
        cout << "1";
    for (int i = 1; i < pos_2; i++)
        cout << "4";
}