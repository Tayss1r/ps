t = int(input())
for _ in range (t):
    n = int(input())
    s = input()
    ans = 0
    i = 0
    while i < n-1:
        if s[i+1] == 'B' and s[i] == 'A':
            i +=2
            ans +=1
        else:
            i+=1
    print(ans)