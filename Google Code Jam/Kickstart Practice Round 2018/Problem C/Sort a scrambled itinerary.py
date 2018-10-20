t = int(input())
for i in range(1, t + 1):
	places = int(input())
	source = []
	destination = []
	store = {}
	for j in range(places):
		source.append(input())
		destination.append(input())
		store[source[-1]] = j
	for ind, port in enumerate(source):
		if port not in destination:
			break
	tracker = ind
	print("Case #%d: " % i, end='')
	for j in range(places):
		print("%s-" % source[tracker], end='')
		print("%s " % destination[tracker], end='')
		if (j + 1) != places:
			tracker = store[destination[tracker]]
	print()
