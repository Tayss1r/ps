n,m = map(int, input().split())

tay = [['.' for _ in range(m)] for _ in range(n)]
for i in range(n):
    if i % 2 == 0:
        for j in range(m):
            tay[i][j] = '#'
    elif i % 4 == 1:
        tay[i][m-1] = '#'
    else:
        tay[i][0] = '#'
for row in tay:
    print(''.join(row))
