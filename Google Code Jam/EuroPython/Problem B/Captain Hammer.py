from math import *
cases = input()
for a in xrange(cases):
    pair = raw_input().split(" ")
    velocity = float(pair[0])
    rang = float(pair[1])
    s = (rang * 9.8) / pow(velocity,2)
    try:
        result = degrees(asin(s)) / 2.0
    except:
        result = 45
    print "Case #" + str(a + 1) + ": " + str(result)
