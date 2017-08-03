import sys
from collections import Counter
import operator


n = int(raw_input().strip())
counter = Counter(map(int, raw_input().strip().split(' ')))
num = max(counter.iteritems(), key=operator.itemgetter(1))[0]
print num