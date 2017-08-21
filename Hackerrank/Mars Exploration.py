
import sys
from collections import Counter

S = raw_input().strip()
count = 0
for i in range(0,len(S)-1,3):
    x = S[i:i+3]
    if x[0]!='S':
        count = count+1
    if x[1]!='O':
        count = count+1
    if x[2]!='S':
        count = count+1
print count
    