import fileinput
f = open('large_output.out','a+')
handle = fileinput.input()
cases = int(handle.next().rstrip())
for a in xrange(cases):
    credit = int(handle.next().rstrip())
    items = int(handle.next().rstrip())
    itemcost = handle.next().rstrip().split(" ")
    done = False
    for i in range(len(itemcost) - 1):
        for j in range(i + 1,len(itemcost)):
            if int(itemcost[i]) + int(itemcost[j]) == credit:
                done = True
                break
        if done:
            break
    f.write('Case #' + str(a + 1) + ': ' + str(i + 1) + " " + str(j + 1) + '\n')
f.close()
