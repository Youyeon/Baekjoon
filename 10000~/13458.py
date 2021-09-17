# https://www.acmicpc.net/problem/13458
# 제목: 시험 감독
from math import ceil

N = int(input()) # 시험장의 개수
A = []
nums = input().split()
nums_len = len(nums)
for i in range(nums_len):
  A.append(int(nums[i]))

BC = input().split()
B, C = int(BC[0]), int(BC[1])

cnt = N # 시험장 수 = 총감독관 최소 수
for i in range(nums_len):
  if A[i] > B:
    check = A[i] - B
    need = ceil(check/C)
    cnt += need
  
print(cnt)