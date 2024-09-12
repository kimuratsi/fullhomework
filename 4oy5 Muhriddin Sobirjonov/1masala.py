import os 
os.system("cls")

def qoshish(ls: list, ls1: list):
    ls.pop()
    ls.extend(ls1)
    print(ls)

ls = [1, 3, 5, 7, 9, 10]
ls1 = [2, 4, 6, 8]

qoshish(ls, ls1)



