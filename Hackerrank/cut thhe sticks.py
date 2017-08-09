n = int(raw_input().strip())
arr = map(int,raw_input().strip().split(' '))
print len(arr)
while(len(arr)>1):
    min_num = min(arr)
    for i in range(len(arr)):
        arr[i]=arr[i]-min_num
    while 0 in arr: arr.remove(0)
    for item in arr:
        if item<0:
            arr.remove(item)
    print len(arr)
