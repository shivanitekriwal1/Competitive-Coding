import math

t = int(raw_input())
def ispower(n,b):
       return 2**int(math.log(n,b))==n
for i in range(t):
    p=0
    n = int(raw_input()) 
    while(n>1):
        if(ispower(n,2)==True):
            n=n/2
        else:
            m = int(math.log(n,2))
            n = n-2**m
        p=p+1
    if(p%2==0):
        print "Richard"
    else:
        print "Louise"