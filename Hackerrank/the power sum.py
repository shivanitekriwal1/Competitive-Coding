# Enter your code here. Read input from STDIN. Print output to STDOUT
import math

def func(X,N,num):
    if(math.pow(num,N)<X):
        return func(X,N,num+1)+ func(X-math.pow(num,N), N, num+1)
    else:
        if(math.pow(num,N)==X):
            return 1
        else:
            return 0
        
X = int(raw_input())
N = int(raw_input())
print func(X,N,1)
    
    