s = input ()
n = len(s)
tay = [0] * n

for i in range (1,n):
    if s[i] == s[i-1]:
        tay[i] = tay[i-1] +1
    else:
        tay[i] = tay[i-1]

m = int(input())
for _ in range (m):
    ymin, ysar = map(int, input().split())
    print (tay[ysar-1] - tay[ymin-1])
