t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    test = False
    for i in range(1,n):
        if abs(arr[i]-arr[i-1]) > 1:
            test = True
            break
    print('NO' if test else 'YES')