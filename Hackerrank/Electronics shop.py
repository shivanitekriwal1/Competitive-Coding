#!/bin/python

import sys
from itertools import product

s,n,m = raw_input().strip().split(' ')
s,n,m = [int(s),int(n),int(m)]
keyboards = map(int, raw_input().strip().split(' '))
drives = map(int, raw_input().strip().split(' '))

sum=[]
for i in list(product(keyboards,drives)):
    sum.append(i[0]+i[1])
sum.append(-1)
print (max(x for x in sum if x<=s))


