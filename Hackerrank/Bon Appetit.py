import sys

n, k = raw_input().strip().split(' ')
n, k = [int(n), int(k)]
ar = map(int, raw_input().strip().split(' '))
b = int(raw_input().strip())
sum = sum(ar)-ar[k]
final = sum/2
if final ==b:
    print "Bon Appetit"
else:
    final = b-final
    print final