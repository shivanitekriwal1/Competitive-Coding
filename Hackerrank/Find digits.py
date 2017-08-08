t = int(raw_input().strip())
for a0 in xrange(t):
    a=[]
    count=0
    n = int(raw_input().strip())
    b=n
    for i in range(len(str(n))):
        m = n%10
        n = n/10
        a.append(m)
    for j in range(len(a)):
        if b%a[j]==0:
            count+=1
    print count