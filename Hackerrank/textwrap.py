s = raw_input()
k = raw_input()
wrapper  = textwrap.TextWrapper(width=int(k))
list = wrapper.wrap(text=s)
for element in list:
    print element