t = int (input())
for _ in range(t):
    n,m = map(int, input().split())
    a = input()
    mp = {str: 0 for str in 'ABCDEFG'}
    for i in a:
        mp[i] += 1
    ans = 0
    for i in mp:
        if mp[i] < m:
            ans += m-mp[i]
    print(ans)

