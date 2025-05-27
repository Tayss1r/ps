t = int(input())
for _ in range(t):
    s = input()[::-1]
    res = ''
    for c in s:
        if c == 'p':
            res += 'q'
        elif c == 'q':
            res += 'p'
        else:
            res += c
    print(res)
