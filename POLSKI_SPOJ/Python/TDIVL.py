number_of_cases = int(input())
for x in range(number_of_cases):
    numbers = input()
    list_of_numbers = list(numbers.split())
    if int(list_of_numbers[0]) % int(list_of_numbers[1]) == 0:
        print("TAK")
    else:
        print("NIE")
