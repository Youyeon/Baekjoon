# https://www.acmicpc.net/problem/10845
# 제목: 큐
import re
import sys

queue = [] # queue

N = int(sys.stdin.readline()) # 명령 수
for i in range(N):
    com = sys.stdin.readline() # 명령
    if re.match("push", com): # push
        queue.append(re.findall('\d+', com)[0])
    elif re.match("pop", com): # pop
        if len(queue)>0:
            front = queue.pop(0)
            print(front)
        else:
            print("-1")
    elif re.match("size", com): # size
        print(len(queue))
    elif re.match("empty", com): # empty
        if len(queue)==0:
            print("1")
        else:
            print("0")
    elif re.match("front", com): # front
        if len(queue)>0:
            print(queue[0])
        else:
            print("-1")
    elif re.match("back", com): # back
        if len(queue)>0:
            print(queue[-1])
        else:
            print("-1")