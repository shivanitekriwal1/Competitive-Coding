i,j,k = raw_input().strip().split(' ')
i,j,k = [int(i), int(j), int(k)]
count=0
for x in range(i,j+1):
    y=x
    reverse=0
    while(x>0):
        remainder=x%10
        reverse = (reverse*10)+remainder
        x = x//10
    if ((abs(y-reverse))%k)==0:
        count+=1
print count