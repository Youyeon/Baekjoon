# https://www.acmicpc.net/problem/2108
# 제목: 통계학
import sys

num_dict = dict()
nums = list()
mode = list() # 최빈값 list
N = int(sys.stdin.readline()) # 수 개수

for i in range(N):
    num = int(sys.stdin.readline())
    nums.append(num)
    if num not in num_dict:
        num_dict[num]=1
    else:
        num_dict[num] += 1

nums.sort() # 정렬

values = num_dict.values() # dictionary value list
max_ = max(values) # 가장 많이 나타난 횟수

for key in num_dict.keys():
    if num_dict[key]==max_:
        mode.append(key)
mode.sort() # 정렬

print(round(sum(nums)/N)) # 산술평균
print(nums[int(N/2)]) # 중앙값
if len(mode)>=2:
    print(mode[1]) # 최빈값
else:
    print(mode[0]) # 최빈값
print(nums[N-1]-nums[0]) # 범위