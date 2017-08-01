import sys

n = int(raw_input().strip())
grades = []
for i in range(n):
    marks = int(raw_input().strip())
    grades.append(marks)
    if marks<38 or marks%5==0:
        print marks
    elif marks%5>3 or marks%5==3:
        print (marks+ (5-marks%5))
    else:
        print marks