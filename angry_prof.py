#The Angry professor

n = int(raw_input())

for y in range(n):
    l1 = map(int,raw_input().split())
    l2 = map(int,raw_input().split())
    l2 = [x for x in l2 if x <= 0]
    if len(l2) >= l1[1]:
        print "NO"
    else:
        print "YES"

