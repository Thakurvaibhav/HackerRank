# Caesar cipher

# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
word = raw_input()
k = int(raw_input())
wordlist = list(word)
lis = []
for w in word:
    z = ord(w)
    if(65 <= z <=90 or 97 <= z <=122):
        z1 = z+k
        while(65 <= z <=90 and z1 > 90):
            r = z1-90
            z1 = 64+r
        while(97 <= z <=122 and z1 > 122):
            r = z1 - 122
            z1 = 96+r
        lis.append(chr(z1))
    else:
        lis.append(chr(z))
print ''.join(lis)
