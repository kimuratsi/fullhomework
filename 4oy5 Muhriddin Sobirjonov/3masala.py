import os 
os.system("cls")

def listlar(ls: list, ls1: list):
    ls1.extend(ls)
    return ls1

ls = [10, 20, 30]
ls1 = [40, 50, 60]
natija = listlar(ls, ls1)
print(natija)









