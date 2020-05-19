number_of_cases = int(input())
for x in range(number_of_cases):
    string = input()
    numbers = list(string.split(" "))
    a = int(numbers[0])
    b = int(numbers[1])
    while b:
        a, b = b, a % b
    print(a)
