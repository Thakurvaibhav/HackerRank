#The Chocolate feast

T = int(raw_input())
for i in range (0,T):
    A,B,C1 = [int(x) for x in raw_input().split(' ')]
    count = 0
    val1 = A/B
    k = val1/C1
    z = val1%C1
    count = count + k
    k = k+z
    while k >= C1:
            k = k/C1        
            count = count + k
            if k < C1:
                break
            z = k%C1 
            k = k+z
    print count+val1

