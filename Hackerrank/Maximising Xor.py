#!/bin/python

# Complete the function below.

a=[]
def  maxXor( l,  r):
    for i in range(l,r+1):
        for j in range(l,r+1):
            a.append(i^j)
    return max(a)
        

    

_l = int(raw_input());
_r = int(raw_input());

res = maxXor(_l, _r);
print(res)

