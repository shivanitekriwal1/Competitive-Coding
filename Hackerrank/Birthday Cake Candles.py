import sys
n = int(raw_input().strip())
ar = map(int, raw_input().strip().split(' '))
a=1
for i in range(n-1):
    if ar[i+1]>ar[0]:
        c=ar[0]
        ar[0]=ar[i+1]
        ar[i+1]=c          
for j in range(1,n):
    if ar[j]==ar[0]:
        a+=1
print a