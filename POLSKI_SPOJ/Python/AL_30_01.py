data = list(input().split())
counter = 0
for x in range(int(data[1])):
    word = sorted(list(input()))
    check = sorted(list(data[0]))
    if word == check:
        counter += 1
print(counter)
