import fileinput
fh = open('large_output.out','w+')
handle = fileinput.input()
cases = int(handle.next().rstrip('\n'))
for a in xrange(cases):
    root = []
    pair = handle.next().rstrip('\n').split(" ")
    existing = int(pair[0])
    tobemade = int(pair[1])
    for b in range(existing):
        directory = handle.next().rstrip('\n')[1:].split('/')
        root.append("/".join(directory))
        for c in range(len(directory) - 1):
            d = directory.pop(-1)
            root.append("/".join(directory))
    root = list(set(root))
    count = 0
    for e in range(tobemade):
        work = handle.next().rstrip('\n')[1:].split('/')
        done = False
        if "/".join(work) not in root:
            root.append("/".join(work))
            for f in range(len(work) - 1):
                g = work.pop(-1)
                count += 1
                if "/".join(work) in root:
                    done = True
                    break
                root.append("/".join(work))
            if not(done):
                count += 1
    fh.write("Case #" + str(a + 1) + ": " + str(count) + "\n")
fh.close()
