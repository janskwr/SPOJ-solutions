def nwd(a, b):
    while b:
        a, b = b, a % b
    return a


number_of_cases = input()
for x in range(int(number_of_cases)):
    line = input()
    numbers = list(line.split(" "))
    num1 = int(numbers[0])
    num2 = int(numbers[1])
    print(int((num1 * num2) / nwd(num1, num2)))
