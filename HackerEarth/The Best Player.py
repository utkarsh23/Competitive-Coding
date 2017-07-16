inp = raw_input()
n = int(inp.split(" ")[0])
t = int(inp.split(" ")[1])
A = []
for a in range(n):
	hold = raw_input()
	A.append((hold.split(" ")[0], int(hold.split(" ")[1])))
for i in range(n - 1):
	for j in range(n - i - 1):
		if (A[j][1] > A[j + 1][1]) or ((A[j][1] == A[j + 1][1]) and (A[j][0] < A[j + 1][0])):
			A[j], A[j + 1] = A[j + 1], A[j]
A = A[::-1]
for b in range(t):
	print A[b][0]