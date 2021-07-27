# https://www.acmicpc.net/problem/5430
# 제목: AC
T = int(input()) # 테스트 케이스

for _ in range(T):
    isError = 0
    begin=0
    end=0

    com = input()
    n = int(input())
    cnt = n
    if n!=0:
        end = n-1

    # array 입력 및 숫자 파싱
    array = input()
    array = array.replace('[','')
    array = array.replace(']','')
    array = array.split(',')

    for i in range(len(com)):
        command = com[i]
        if command=='R': # 인덱스 뒤집어주기
            temp = begin
            begin = end
            end = temp
        else: # D
            if cnt==0: # 배열에 원소 없음 -> 삭제 불가 -> 에러
                isError=1
                break
            else:
                if begin>end: # reversed
                    begin = begin-1
                    cnt = cnt-1
                else:
                    begin = begin+1
                    cnt = cnt-1
    
    if isError:
        print("error")
    else:
        if cnt==0:
            print('[]')
        else:
            arr = []
            if begin<end:
                for i in range(begin, end+1):
                    t = int(array[i])
                    arr.append(t)
            else:
                for i in range(begin, end-1, -1):
                    t = int(array[i])
                    arr.append(t)

            print('[', end='')
            for i in range(len(arr)):
                if (i==len(arr)-1):
                    print(arr[i], end='')
                else:
                    print(arr[i], end=",")
            print(']')