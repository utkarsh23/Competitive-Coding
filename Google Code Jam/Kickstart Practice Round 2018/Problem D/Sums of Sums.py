t = int(input())
for case in range(t):
	elements, queries = list(map(int, input().strip().split(" ")))
	array = list(map(int, input().strip().split(" ")))
	length = len(array)
	new_array = []
	for i in range(length):
		summ = 0
		for j in range(i, length):
			summ += array[j]
			new_array.append(summ)
	new_array = sorted(new_array)
	print("Case #%d:" % (case + 1))
	for q in range(queries):
		pair = tuple(map(int, input().strip().split(" ")))
		summ = 0
		for s in range(pair[0] - 1, pair[1]):
			summ += new_array[s]
		print(summ)
