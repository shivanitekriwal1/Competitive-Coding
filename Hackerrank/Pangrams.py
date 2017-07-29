from collections import Counter

s = raw_input().replace(' ','')
str = s.lower()

if len(Counter(str)) == 26:
    print "pangram"
else:
    print "not pangram"
    
    
    
