import sys

h = map(int, raw_input().strip().split(' '))
a=[]
word = raw_input().strip()
for i in range(len(word)):
    value= ord(word[i])-97
    a.append(h[value])
val = max(a)
print (len(word)*val)