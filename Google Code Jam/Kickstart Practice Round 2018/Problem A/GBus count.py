t = int(input())
for i in range(t):
	buses = input()
	if buses == '':
		buses = input()
	buses = int(buses)
	ranges = list(map(lambda d: int(d), input().strip().split(' ')))
	cities = int(input())
	citynos = []
	print('Case #%d: ' % (i + 1), end='')
	for j in range(cities):
		city = int(input())
		count = 0
		for k in range(buses):
			if (city >= ranges[2 * k]) and (city <= ranges[(2 * k) + 1]):
				count += 1
		print('%d ' % count, end='')
	print()