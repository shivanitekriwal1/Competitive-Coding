import sys


s = raw_input().strip()
n = long(raw_input().strip())
count=0
count1=0
num = n%len(s)
if num>0:
    for i in range(0,num):
        if s[i]=='a':
            count+=1
for i in s:
    if i=='a':
        count1+=1
num1 = n/len(s)
print (count+(count1*num1))
    
    
