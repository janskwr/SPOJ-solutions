number_of_cases = input()
for x in range(int(number_of_cases)):
    line = input()
    counter = 1
    sentence = list(line)
    sentence.append("x")
    for y in range(1, len(line) + 1):
        if sentence[y] != sentence[y - 1]:
            if counter > 2: print(sentence[y - 1], str(counter), sep='', end='')
            elif counter == 2: print(sentence[y - 1], sentence[y - 1], sep='', end='')
            else: print(sentence[y - 1], end='')
            counter = 1
        else: counter += 1
    print()
