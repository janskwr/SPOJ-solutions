number_of_cases = int(input())
for x in range(number_of_cases):
    string = input()
    strings_separated = list(string.split(" "))
    word1 = list(*strings_separated[0].split())
    word2 = list(*strings_separated[1].split())
    length = min(len(word1), len(word2))
    for y in range(length):
        print(word1[y], word2[y], sep='', end='')
    print()
