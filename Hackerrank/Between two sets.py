
import sys
n, m = raw_input().strip().split(' ')
n, m = [int(n), int(m)]
count=0
a = map(int, raw_input().strip().split(' '))
b = map(int, raw_input().strip().split(' '))
for i in range(a[n-1], b[0]+1):
    if (i%a[n-1]==0) and (b[0]%i==0):
        count+=1
print count

