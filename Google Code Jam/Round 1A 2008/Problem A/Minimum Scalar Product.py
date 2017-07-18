import fileinput
f = open('large_output.out','w+')
handle = fileinput.input()
cases = int(handle.next().rstrip('\n'))
for a in xrange(cases):
    xys = int(handle.next().rstrip('\n'))
    xs = handle.next().rstrip('\n').split(" ")
    ys = handle.next().rstrip('\n').split(" ")
    xnum = []
    ynum = []
    for i in range(xys):
        xnum.append(int(xs[i]))
        ynum.append(int(ys[i]))
    xnum = sorted(xnum)
    ynum = sorted(ynum)[::-1]
    product = 0
    for j in range(xys):
        product += xnum[j] * ynum[j]
    f.write("Case #" + str(a + 1) + ": " + str(product) + '\n')
f.close()
