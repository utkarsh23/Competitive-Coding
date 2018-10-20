n = int(input())
for i in range(n):
	pattern = input()
	count = 0
	current = pattern[0]
	for ch in pattern[1:]:
		if ch != current:
			current = ch
			count += 1
	if pattern[-1] == '-':
		count += 1
	print("Case #%d: %d" % ((i + 1), count))
