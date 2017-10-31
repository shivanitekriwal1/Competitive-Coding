
import sys
import collections

def lonelyinteger(a):
    count = collections.Counter(a)
    for key, value in count.items():
        if value==1:
            return key
        
n = int(raw_input().strip())
a = map(int, raw_input().strip().split(' '))
result = lonelyinteger(a)
print(result)
