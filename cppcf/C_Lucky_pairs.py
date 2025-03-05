def is_palindrome(num):
    num_str = str(num)
    return num_str == num_str[::-1]

def count(n, arr):
    count = 0
    choftha = {}
    
    for i in range(n):
        for j in range(i, n):
            res = arr[i] ^ arr[j]
            if is_palindrome(res):
                count += 1
            if i != j:
                choftha[arr[j]] = choftha.get(arr[j], 0) + 1
                
    return count

n = int(input())
arr = list(map(int, input().split()))

result = count(n, arr)
print(result)
