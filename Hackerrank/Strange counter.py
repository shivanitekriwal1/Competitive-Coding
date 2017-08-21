
import sys


t = int(raw_input().strip())
m = 3
n=3
a = [0]
for i in range(t):
    a.append(m)
    m-=1
    if m==0:
        n=2*n
        m=n
print a[t]

