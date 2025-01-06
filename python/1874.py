import sys

input = sys.stdin.readline

total = int(input().strip())


stack = []
seq = []
push_pop = []
# target = [int(input()) for _ in range(n)] -> Below one can be replaced by this code.
for _ in range(0,total):
    num = int(input().strip())
    seq.append(num)

s_idx = 0
num_idx = 1

for _ in range(0, total * 2 ):
    if len(stack) == 0:
        stack.append(num_idx)
        num_idx += 1
        push_pop.append("+")
    else:
        if stack[-1] == seq[s_idx]:
            s_idx += 1
            del stack[-1]
            push_pop.append("-")
        else:
            stack.append(num_idx)
            num_idx += 1
            push_pop.append("+")

if s_idx != total:
    print("NO")
else:
    for idx in range(0,total*2):
        print(push_pop[idx])
# print("/n".join(push_pop)) <- Join means "change the list to a string by adding a "string" between elements of the list."