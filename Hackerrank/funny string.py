q = int(raw_input().strip())
for a0 in xrange(q):
    count=0
    s = raw_input().strip()
    r = s[::-1]
    for i in range(1,len(s)):
        if abs(ord(s[i])-ord(s[i-1]))==abs(ord(r[i])-ord(r[i-1])):
            count+=1
    if count==len(s)-1:
        print "Funny"
    else:
        print "Not Funny"

