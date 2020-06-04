number_of_cases = int(input())
for x in range(number_of_cases):
    number = int(input())
    print(number - (number % 15))
