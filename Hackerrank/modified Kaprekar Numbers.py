a = int(raw_input())
b = int(raw_input())
c = []
for i in range(a,b+1):
    if i==1:
        c.append(1)
    elif i==2 or i==3:
        continue
    else:
        sum_a = 0
        sum_b = 0
        sq = i**2
        x = len(str(sq))/2
        sq = str(sq)
        if (int(sq[:x])+int(sq[x:]))==i:
            c.append(i)
if len(c)==0:
    print "INVALID RANGE"
else:
    for z in c:     
        print z,

    

        