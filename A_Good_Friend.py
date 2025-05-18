t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    for i in range(n):
        a[i] +=1
        p = 1
        for x in a:
            p *= x
        ans = max(ans,p)
        a[i] -=1
    print(ans)
