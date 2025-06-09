n = int(input())
cards = list(map(int, input().split()))

turn,s, d = 0, 0,0

while cards:
    if cards[0] > cards[-1]:
        if turn%2 == 0:
            s += cards.pop(0)
        else:
            d+= cards.pop(0)
    else:
        if turn % 2 == 0:
            s += cards.pop()
        else:
            d += cards.pop()
    turn +=1
print(s, d)
