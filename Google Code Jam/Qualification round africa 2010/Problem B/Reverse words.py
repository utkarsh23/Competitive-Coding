import fileinput
f = open('large_output.out','w+')
handle = fileinput.input()
cases = int(handle.next().rstrip())
for a in xrange(cases):
    sentence = handle.next().rstrip().split(" ")
    new = " ".join(sentence[::-1])    
    f.write('Case #' + str(a + 1) + ': ' + new + '\n')
f.close()
