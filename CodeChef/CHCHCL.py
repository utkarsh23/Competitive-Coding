cases = input()
for i in range(cases):
    hold = raw_input().strip().split(" ")
    mul = int(hold[0]) * int(hold[1])
    if mul % 2 == 0:
        print "Yes"
    else:
        print "No" 