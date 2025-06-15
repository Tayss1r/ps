# example below, replace it with your solution
n, m = map(int, input().split())

degree = [0] * n

for i in range (m):
    u, v = map(int, input().split())
    degree[u-1] += 1
    degree[v-1] += 1
if all(d == degree[0] for d in degree):
    print("YES")
else:
    print("NO") 

    


