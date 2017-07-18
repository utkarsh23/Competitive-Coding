import fileinput
f = open('large_output.out','w+')
handle = fileinput.input()
integers = handle.next().rstrip('\n').split(" ")
cases = int(integers[2])
wordl = int(integers[0])
possibilities = int(integers[1])
L = []
for b in range(possibilities):
    inn = handle.next().rstrip('\n')
    L.append(inn)
for a in xrange(cases):
    case = handle.next().rstrip('\n')
    inornot = False
    D = {}
    temp = []
    count = 0
    for c in range(len(case)):
        if case[c] == '(':
            inornot = True
            count += 1
        elif case[c] == ')':
            inornot = False
            D[count] = temp
            temp = []
        else:
            if inornot:
                temp.append(case[c])
            else:
                count += 1
                D[count] = [case[c]]
    actcount = 0
    for d in L:
        yesorno = True
        for e in range(len(d)):
            if d[e] not in D[e + 1]:
                yesorno = False
                break
        if yesorno:
            actcount += 1
    f.write("Case #" + str(a + 1) + ": " + str(actcount) + "\n")
f.close()
