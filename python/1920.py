total_a = int(input())
list_a = set(input().split())

total_b = int(input())
list_b = input().split()

for num in list_b:
    if num in list_a:
        print("1")
    else:
        print("0")

## 이 문제에서의 관권은 시간 복잡도인데, list를 기준으로 in을 써버리면, 반복문 까지 함쳐서 O(N^2)이 되기 떄문에 set의 in을 써줘야한다
## set에서의 in은 시간복잡도가 평균적으로 O(1)이다.