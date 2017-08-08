import sys

t = int(raw_input().strip())
for a0 in xrange(t):
    count=0
    n,k = raw_input().strip().split(' ')
    n,k = [int(n),int(k)]
    a = map(int,raw_input().strip().split(' '))
    for i in range(len(a)):
        if a[i]<0 or a[i]==0:
            count+=1
    if count>k or count==k:
        print "NO"
    else:
        print "YES"
    
