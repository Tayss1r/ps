# example below, replace it with your solution
n = int(input())

adj = [[] for _ in range(n+1)]

for i in range(n):
    row = list(map(int, input().split()))
    for j in range(len(row)):
        if row[j] == 1:
            adj[i+1].append(j+1)
        
for i in range(1,n+1):
    row = adj[i]
    print(len(row), *row)