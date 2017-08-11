import sys
import math

s = raw_input().strip()
c = int(math.ceil(math.sqrt(len(s))))
f = lambda x: s[x::c]
final = ' '.join(map(f, range(c)))
print final