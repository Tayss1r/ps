def sboui(n, m, a, b):
    i = 0
    j = 0
    while i < n and j < m:
        sum = 0
        while i < n and sum < b[j]:
            sum += a[i]
            i += 1
        
        if sum == b[j]:
            j += 1
        elif sum > b[j]:
            return "NO"
    
    if j == m:
        return "YES"
    else:
        return "NO"

t = int(input())  

for _ in range(t):
    n, m = map(int, input().split()) 
    a = list(map(int, input().split())) 
    b = list(map(int, input().split()))
    
    print(sboui(n, m, a, b))
