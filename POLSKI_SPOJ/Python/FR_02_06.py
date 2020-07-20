number_of_cases = int(input())
patyczaki = []
normale = []
ulance = []
for x in range(number_of_cases):
    info = list(input().split())
    bmi = float((float(info[1])) / ((float(info[2]) / 100) * (float(info[2]) / 100)))
    if bmi < 18.5:
        patyczaki.append(info[0])
    elif bmi >= 25:
        ulance.append(info[0])
    else:
        normale.append(info[0])
print('niedowaga')
for x in patyczaki:
    print(x)
print()
print('wartosc prawidlowa')
for x in normale:
    print(x)
print()
print('nadwaga')
for x in ulance:
    print(x)
