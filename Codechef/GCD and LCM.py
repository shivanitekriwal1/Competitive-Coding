from fractions import gcd
n= int(raw_input())
for i in range(n):
    a,b= map(int, raw_input().split())
    lcm = (a*b)/gcd(a,b)
    print gcd(a,b)
    print lcm 