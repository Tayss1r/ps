s = input()
numbers = s.split('+')
numbers.sort()
print('+'.join(map(str, numbers)))