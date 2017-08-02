import sys
n = int(raw_input().strip())
s = map(int, raw_input().strip().split(' '))
r=list(s)
highest=0
lowest=0
for i in range(n-1):
    if r[i+1]<r[i]:
        r[i+1]=r[i]
    elif r[i+1]>r[i]:
        highest+=1
for j in range(n-1):
    if s[j+1]>s[j]:
        s[j+1]=s[j]
    elif s[j+1]<s[j]:
        lowest+=1
print highest, lowest