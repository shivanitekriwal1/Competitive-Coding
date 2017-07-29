#!/bin/python

import sys


q = int(raw_input().strip())
word = "hackerrank"
for i in range(q):
    j=0
    s = raw_input().strip()
    if len(s)<len(word):
        print "NO"
    for int in range(len(s)):
        if (j<len(word) and s[int]==word[j]):
            j=j+1
    if j==10:
        print "YES"
    else:
        print "NO"
    
        
        
    # your code goes here
