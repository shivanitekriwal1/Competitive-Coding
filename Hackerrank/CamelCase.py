#!/bin/python

import sys


s = raw_input().strip()
p=1
for i in s:
    if i.isupper():
        p=p+1
print p
    
