''' diagonal difference '''

size = int(raw_input())
lst = []
#parsing input
for x in range(size):
    row = map(int,raw_input().split())
    lst.append(row)

first = 0
second = 0
for x in range(size):
    first = first + lst[x][x]
    second = second + lst[size-1-x][x]

third = first - second
if third < 0:
    third = third*-1
print third