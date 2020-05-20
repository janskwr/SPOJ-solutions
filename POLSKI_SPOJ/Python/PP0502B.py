number_of_cases = input()
for x in range(int(number_of_cases)):
    line = input()
    numbers = list(line.split(" "))
    numbers.pop(0)
    numbers.reverse()
    print(*numbers)
