# https://www.acmicpc.net/problem/2444
# 제목: 별 찍기 - 7

num=int(input())
for i in range(1,num):
    print((num-i)*" "+(2*i-1)*"*")
for i in range(num,0,-1):
    print((num-i)*" "+(2*i-1)*"*")