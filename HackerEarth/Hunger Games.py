n = input()
listt = map(int,raw_input().split(" "))
listt = sorted(listt,reverse=True)
index = 1
maximum = max(listt[0] - listt[1], listt[0] - listt[2])
length = len(listt)
elpop = 0
if length % 2 == 0:
    elpop = listt.pop(-1)
while index < length - 3:
    p1 = listt[index] - listt[index + 2]
    p2 = listt[index] - listt[index + 3]
    p3 = listt[index + 1] - listt[index + 2]
    p4 = listt[index + 1] - listt[index + 3]
    mdiff = max(p1,p2,p3,p4)
    if mdiff in (p1,p4):
        mchosen = max(p2,p3)
    else:
        mchosen = max(p1,p4)
    if mchosen > maximum:
        maximum = mchosen
    index += 2
if length % 2 == 0:
    mchosen = max(listt[-2] - listt[-1], listt[-3] - listt[-1])
    if mchosen > maximum:
        maximum = mchosen
else:
    mchosen = listt[-2] - listt[-1]
    if mchosen > maximum:
        maximum = mchosen
print maximum