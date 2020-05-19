numberOfCases = input()
for x in range(int(numberOfCases)):
    ammount = input()
    sum = 0
    numbersWithWhitespaces = input()
    numbers = list(numbersWithWhitespaces.split(" "))
    for y in numbers: sum += int(y)
    print(sum)
