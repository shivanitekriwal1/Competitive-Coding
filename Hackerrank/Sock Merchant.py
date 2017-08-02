import sys
from collections import Counter

n = int(raw_input().strip())
ar = map(int, raw_input().strip().split(' '))

counter = Counter(ar)
sum=0
for i,j in counter.items():
    sum+=j//2
print sum