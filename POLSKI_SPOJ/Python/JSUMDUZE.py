number_of_cases = int(input())
for x in range(number_of_cases):
    line = input()
    numbers = list(line.split())
    summed = int(numbers[0]) + int(numbers[1])
    print(summed)
