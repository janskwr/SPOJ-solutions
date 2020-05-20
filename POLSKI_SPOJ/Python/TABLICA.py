import sys
for line in sys.stdin:
    numbers = list(line.split())
    numbers.reverse()
    print(*numbers, sep=" ")
