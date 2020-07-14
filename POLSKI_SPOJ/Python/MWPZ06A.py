number_of_cases = int(input())
for x in range(number_of_cases):
    numbers = list(input().split())
    a = float(numbers[0])
    b = float(numbers[1])
    c = float(numbers[2])
    result = round(((-12) * (a + b - b * c)) / (c - 1))
    print(int(result))
