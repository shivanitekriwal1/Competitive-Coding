import sys

t = int(raw_input().strip())
for a0 in xrange(t):
    n, m, s = raw_input().strip().split(' ')
    n, m, s = [int(n), int(m), int(s)]
    if (m+s-1)%n==0:
        print n
    else:
        print (m+s-1)%n