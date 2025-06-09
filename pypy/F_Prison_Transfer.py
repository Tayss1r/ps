n,t,c = map(int,input().split())
a = list(map(int,input().split()))
cnt = 0
ans = 0
for x in a:
    if x<=t:
        cnt += 1
    else:
        cnt = 0
    if cnt>=c:
        ans += 1
print(ans)
