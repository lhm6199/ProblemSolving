nums = int(input())

count = 0
for idx in range(1, nums + 1):
    temp = idx
    while(temp / 5 != 0 and temp % 5 == 0):
        count += 1
        temp /= 5

print(count)