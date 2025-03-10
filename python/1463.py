import sys

input = sys.stdin.readline

num = int(input().strip().split()[0])
one_idx = 1
total = 0

while(one_idx != num):    
    if one_idx * 3 < num:
        one_idx *= 3
        total += 1
    else:
        total += num - (one_idx)
        break
print((total))

n = int(input())

# DP 테이블 초기화
d = [0] * 1000001

# 다이나믹 프로그래밍 진행(bottom-up)
for i in range(2, n+1):
    # 현재의 수에서 1을 빼는 경우
    d[i] = d[i-1] + 1
    # 현재의 수가 2로 나누어 떨어지는 경우
    if i%2 == 0:
        d[i] = min(d[i], d[i//2] + 1)
    # 현재의 수가 3으로 나누어 떨어지는 경우
    if i%3 == 0:
        d[i] = min(d[i], d[i//3] + 1)

# 결과 출력
print(d[n])