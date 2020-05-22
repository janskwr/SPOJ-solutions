import math


def nww(a, b):
    return (a * b) // math.gcd(a, b)


global temp
number_of_cases = int(input())
for x in range(number_of_cases):
    number_of_numbers = int(input())
    line = input()
    numbers = list(line.split())
    if number_of_numbers == 1:
        print(numbers[0])
    else:
        for y in range(1, number_of_numbers):
            temp = nww(int(numbers[y - 1]), int(numbers[y]))
            numbers[y] = temp
        print(int(temp))
