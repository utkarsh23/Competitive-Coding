t = int(input())
for i in range(t):
	length = int(input())
	A = input().strip()
	B = input().strip()
	B_store = {}
	for a in range(1, length + 1):
		B_store[a] = []
		for b in range(length - a + 1):
			temp = {}
			for c in B[b: (a + b)]:
				if c in temp:
					temp[c] += 1
				else:
					temp[c] = 1
			B_store[a].append(temp)
	count = 0
	for x in range(1, length + 1):
		for y in range(length - x + 1):
			temp = {}
			for z in A[y: (x + y)]:
				if z in temp:
					temp[z] += 1
				else:
					temp[z] = 1
			if temp in B_store[x]:
				count += 1
	print("Case #%d: %d" % (i + 1, count))
