from math import floor
n = int(raw_input())
b=5
c=0
for i in range(n):
    a= int(floor(b/2))
    b= a*3
    c=c+a
print c