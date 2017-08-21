q = int(raw_input().strip())
for a0 in xrange(q):
    s = raw_input().strip()
    c = len(s)/2
    count=0
    if len(s)%2!=0:
        print -1
    else:
        s1 = ''.join(sorted(s[:c]))
        s2 = ''.join(sorted(s[c:]))
        print s1,s2
        for i in range(c):
            if s1[i]!=s2[i]:
                count+=1
        print count