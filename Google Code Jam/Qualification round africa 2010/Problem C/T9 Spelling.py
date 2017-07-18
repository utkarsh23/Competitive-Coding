import fileinput
f = open('large_output.out','w+')
handle = fileinput.input()
cases = int(handle.next().rstrip())
D = {" ":0,"a":2,"b":22,"c":222,"d":3,"e":33,"f":333,"g":4,"h":44,"i":444,"j":5,"k":55,"l":555,"m":6,"n":66,"o":666,"p":7,"q":77,"r":777,"s":7777,"t":8,"u":88,
     "v":888,"w":9,"x":99,"y":999,"z":9999}
for a in xrange(cases):
    current = "1"
    sen = handle.next().rstrip('\n')
    mes = ""
    for b in sen:
        num = str(D[b])
        if num[0] == current:
            mes += " " + num
        else:
            mes += num
        current = num[0]
    f.write("Case #" + str(a + 1) + ": " + mes + '\n')
f.close()
