info = list(input().split())
xo = int(info[0])
yo = int(info[1])
radius = int(info[2])
number_of_points = int(input())
for x in range(number_of_points):
    xy = list(input().split())
    xp = int(xy[0])
    yp = int(xy[1])
    distance = (((xo - xp) ** 2) + ((yo - yp) ** 2)) ** (1/2)
    if distance < radius:
        print('I')
    elif distance > radius:
        print('O')
    else:
        print('E')
