# example below, replace it with your solution
n = int(input())

ans = 0
for _ in range(n):
    ans += sum(list(map(int, input().split())))
print(ans//2)