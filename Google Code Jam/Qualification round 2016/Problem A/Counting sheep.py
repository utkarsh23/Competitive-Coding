import fileinput
f = open("large_output.out",'w+')
handle = fileinput.input()
cases = int(handle.next().rstrip('\n'))
for a in range(cases):
    num = int(handle.next().rstrip('\n'))
    if num == 0:
        f.write("Case #" + str(a + 1) + ": INSOMNIA\n")
    else:
        st = 1
        L = range(10)
        while L != []:
            for i in str(num * st):
                if int(i) in L:
                    L.remove(int(i))
            st += 1
        f.write("Case #" + str(a + 1) + ": " + str(num * (st - 1)) + '\n')
f.close()
