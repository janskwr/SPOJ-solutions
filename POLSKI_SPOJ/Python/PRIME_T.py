def isPrime(num):
    if num == 1: return False
    for x in range(2, int(num ** 0.5 + 1)):
        if num % x == 0: return False
    return True


numberOfCases = input()
for x in range(int(numberOfCases)):
    number = int(input())
    print("NIE") if isPrime(number) is False else print("TAK")
