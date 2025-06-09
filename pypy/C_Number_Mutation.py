a, b = map(int, input().split())

arr = [b]
while b > a:
    if b % 2 == 0:
        b //= 2
        arr.append(b)
    elif b % 10 == 1:
        b = (b - 1) // 10
        arr.append(b)
    else:
        print("NO")
        exit()

if b == a:
    print("YES")
    print(len(arr))
    print(*reversed(arr))
else:
    print("NO")
