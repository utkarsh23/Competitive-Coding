string = raw_input()
string = string[::-1]
count = 0
new = ''
for i in string:
    if (int(i) % 2 == 0):
        count += 1
    new = str(count) + " " + new
print new