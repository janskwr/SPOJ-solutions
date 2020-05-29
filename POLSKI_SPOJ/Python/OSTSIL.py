from math import factorial
number_of_cases = int(input())
for x in range(number_of_cases):
    number = int(input())
    facl = list(str(factorial(number)))
    facl.reverse()
    ptr = 0
    while facl[ptr] == '0':
        ptr += 1
    print(*facl[ptr])
