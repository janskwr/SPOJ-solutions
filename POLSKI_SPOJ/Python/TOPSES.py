for x in range(int(input())):
    line1 = list(input())
    line2 = list(input())
    tmp = list(line2)
    while line1 != line2:
        line2.insert(0, line2[-1])
        line2.pop()
        if line2 == tmp and line1 != line2:
            print('no')
            break
    if line1 == line2:
        print('yes')
