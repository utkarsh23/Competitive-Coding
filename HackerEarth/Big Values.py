x = input()
mul = 1
ton = False
for i in range(6):
	tbm = x - i
	if tbm % 720 == 0:
		tbm /= 720
		ton = True
	mul *= (tbm % 1000000007)
if not(ton):
	mul = 1
	for j in range(6):
		mul *= (x - j)
	mul /= 720
print mul % 1000000007