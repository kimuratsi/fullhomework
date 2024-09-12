import os 
os.system("cls")

def sortlash(ls: list, ls1: list):
    ls2 = []
    kichik = min(len(ls), len(ls1))
    for i in range(kichik):
        ls2.append(ls[i])
        ls2.append(ls1[i])
    if len(ls) > kichik:
        ls2.extend(ls[kichik:])
    elif len(ls1) > kichik:
        ls2.extend(ls1[kichik:])
    return ls2

ls = [1, 2, 3, 4, 5]
ls1 = [11, 22, 33, 44]
natija = sortlash(ls, ls1)
print(natija)









