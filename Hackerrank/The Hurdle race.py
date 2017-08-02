import sys
n,k = raw_input().strip().split(' ')
n,k = [int(n),int(k)]
height = map(int, raw_input().strip().split(' '))
# your code goes here
maximum = max(height)
if maximum<k:
    print '0'
elif maximum>k:
    print (maximum-k)