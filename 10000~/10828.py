# https://www.acmicpc.net/problem/10828
# 제목: 스택
import re
import sys

stack = [] # stack

N = int(sys.stdin.readline()) # 명령 수
for i in range(N):
    com = sys.stdin.readline() # 명령
    if re.match("push", com):
        stack.append(re.findall('\d+', com)[0])
    elif re.match("pop", com):
        if len(stack)>0:
            top = stack.pop()
            print(top)
        else:
            print("-1")
    elif re.match("size", com):
        print(len(stack))
    elif re.match("empty", com):
        if len(stack)==0:
            print("1")
        else:
            print("0")
    elif re.match("top", com):
        if len(stack)>0:
            print(stack[-1])
        else:
            print("-1")