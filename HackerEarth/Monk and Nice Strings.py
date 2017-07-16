n = input()
strings = []
for i in range(n):
	strings.append(raw_input())
print 0
for j in range(1, n):
	score = 0
	for k in range(0, j):
		if strings[k] < strings[j]:
			score += 1;
	print score