import sys

n = int(raw_input().strip())
A = map(int,raw_input().strip().split(' '))
b=[]
for i in range(n):
    for j in range(i+1,n):
        if A[i]==A[j]:
            b.append(abs(i-j))
if len(b)==0:
    print -1
else:
    print min(b)