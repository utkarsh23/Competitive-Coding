import fileinput
f = open('large_output.out','w+')
handle = fileinput.input()
cases = int(handle.next().rstrip('\n'))
for a in xrange(cases):
    ropes = int(handle.next().rstrip('\n'))
    L = []
    for b in xrange(ropes):
        t = handle.next().rstrip('\n').split(" ")
        L.append((int(t[0]),int(t[1])))
    count = 0
    for c in range(len(L)):
        for d in range(len(L)):
            if (L[c][0] < L[d][0] and L[c][1] > L[d][1]):
                count += 1
    f.write("Case #" + str(a + 1) + ": " + str(count) + "\n")
f.close()
