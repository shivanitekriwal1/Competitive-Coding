n= int(raw_input())
for i in range(0,n):
    a,b,c= map(int, raw_input().split())
    l=[]
    l.append(a)
    l.append(b)
    l.append(c)
    l.sort()
    print l[1]