t = int(input())
for _ in range(t):
    n, c = input().split()
    s = input().strip()
    n = int(n)
    s += s

    max_wait = 0
    i = 0
    while i < len(s):
        if s[i] == c:
            j = i
            wait = 0
            while s[j] != 'g':
                wait += 1
                j += 1
            max_wait = max(max_wait, wait)
            i = j
        else:
            i += 1
    print(max_wait)
