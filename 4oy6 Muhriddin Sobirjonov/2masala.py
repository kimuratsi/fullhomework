import os
os.system("cls")

def IKKILIK(son):
    ls = []
    while son != 0:
        ls.append(son % 2)
        son //= 2
    ls.reverse()
    print(''.join(str(x) for x in ls))

son = int(input("N:  "))
IKKILIK(son)

