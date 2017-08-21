n = int(raw_input())
a=[]
for i in range(n):
    x = int(raw_input())
    a.append(x)
for j in range(n):
    a[j] = str(a[j])
    a[j] = a[j][::-1]
    print a[j]