numbers_in_set = int(input())
set = []
for x in range(numbers_in_set):
    number = input()
    set.append(number)
input()
number_of_cases = int(input())
for x in range(number_of_cases):
    case = int(input())
    counter = 0
    for y in set:
        if case > int(y):
            counter += 1
    print(counter)
