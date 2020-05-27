points = []
distances = []
number_of_cases = int(input())
for x in range(number_of_cases):
    number_of_points = int(input())
    for y in range(number_of_points):
        point = list(input().split())
        points.append(point)
        distances.append((int(point[1]) ** 2 + int(point[2]) ** 2) ** (1/2))
    distances_sorted, points_sorted = zip(*sorted(zip(distances, points)))
    for i in points_sorted:
        print(*i)
    points.clear()
    distances.clear()
    input()
