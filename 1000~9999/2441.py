# https://www.acmicpc.net/problem/2441
# 제목: 별 찍기 - 4

num=int(input())
for i in range(0,num):
    print(i*" "+(num-i)*"*")