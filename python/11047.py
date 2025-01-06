import sys

input = sys.stdin.readline

first_line = input().strip().split()

coin_num = int(first_line[0])
total = int(first_line[1])
coins = [int(input()) for _ in range(0,coin_num)]

result = 0


for idx in range(coin_num-1,-1,-1):
    if coins[idx] <= total:
        result += (total // coins[idx])
        total %= coins[idx]

print(result) 

