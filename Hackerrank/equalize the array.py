n = int(raw_input().strip())
arr = map(int, raw_input().strip().split(' '))
count=0
element = max(arr, key=arr.count)
while element in arr: arr.remove(element)
print len(arr)