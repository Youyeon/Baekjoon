# https://www.acmicpc.net/problem/10816
# 제목: 숫자 카드 2
import pprint
card = dict()

N = int(input()) # 숫자 카드 개수
numbers = input().split(' ')
for i in range(N):
    num = int(numbers[i])
    if num in card:
        card[num] = card[num]+1
    else:
        card[num]=1

M = int(input())
numbers = input().split(' ')
for i in range(M):
    num = int(numbers[i])
    if num in card:
        print(card[num], end=' ')
    else:
        print(0, end=' ')