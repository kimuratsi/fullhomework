import os
os.system("cls")

def farqlilar(a: list, b: list):
    a = set(a)
    b = set(b)
    new = set(a.difference(b))
    b.difference_update(a)
    b = list(b)
    new = list(new)
    new.extend(b)
    new.sort()
    return new

a = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89]
b = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13]
new = list(farqlilar(a, b))
print(new)





