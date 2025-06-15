# example below, replace it with your solution
n = int(input())
adj = [[] for _ in range(n)]

for i in range (n):
    row = list(map(int, input().split()))
    count = row[0]
    for j in range (1,count+1):
        adj[i].append(row[j]-1)

mat = [[0]*n for _ in range(n)]

for i in range(len(adj)):
    for j in range(len(adj[i])):
        mat[i][adj[i][j]] = 1
print(mat)
