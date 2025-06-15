# example below, replace it with your solution
n = int(input())
graph = [[] for _ in range(n)]

def AddEdge(u,v):
    graph[u].append(v+1)
    graph[v].append(u+1)

def Vertex(u):
    print(*graph[u])



k = int(input())

for _ in range (k):
    row = list(map(int, input().split()))
    if (row[0] == 1):
        AddEdge(row[1]-1,row[2]-1)
    else:
        Vertex(row[1]-1)
