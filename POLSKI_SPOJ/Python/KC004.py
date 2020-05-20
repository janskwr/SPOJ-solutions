import sys
for line in sys.stdin:
    numbers = list(line.split())
    print(numbers[2:].count(numbers[0]))
