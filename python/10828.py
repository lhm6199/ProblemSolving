import sys
input = sys.stdin.readline


def push(pstack, input):
    pstack.append(input)

def pop(pstack):
    if pstack == []:
        return -1
    temp = pstack[-1]
    del pstack[-1]
    return temp

def size(pstack):
    return len(pstack)

def isempty(pstack):
    if pstack == []:
        return 1
    else:
        return 0

def top(pstack):
    if pstack == []:
        return -1
    return pstack[-1]

commands = int(input().strip().split()[0])

pstack = []

for idx in range(0,commands):
    command = input().strip().split()
    if command[0] == 'push':
        push(pstack,int(command[1]))
    elif command[0] == 'pop':
        print(pop(pstack))
    elif command[0] == 'size':
        print(size(pstack))
    elif command[0] == 'empty':
        print(isempty(pstack))
    elif command[0] == 'top':
        print(top(pstack))

#이문제 같은 경우는 input을 받을때 sys.stdin.readlin()으로 받아야 하는 문제. -> 얘같은 경우에는 \n을 포함한 한 줄을 받는 메소드. 입력 내용을 끝까지 받는 다른 메소드로는 sys.stdin.read()도 있다.
# -> input 자체에는 입력값을 위의 메소드로 받는 것과 더불어 이를 처리하는 구문도 존재하기에 시간이 더 오래 걸린다는 단점이 있다.