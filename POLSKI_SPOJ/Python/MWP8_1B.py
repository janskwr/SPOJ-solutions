original = list(input().split())
written = list(input().split())
original.sort()
written.sort()
for x in written:
    original.remove(x)
print(len(original))
for x in original:
    print(x)
