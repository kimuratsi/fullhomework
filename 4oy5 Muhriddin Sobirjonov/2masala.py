import os
os.system("cls")

def nollar(ls: list):
    son = []
    for i in range(len(ls)):
        if ls[i] != 0:
            son.append(ls[i])
    nol = [0] * (len(ls) - len(son))
    son.extend(nol)
    return son    

ls = [3, 4, 0, 0, 0, 6, 2, 0, 6, 7, 6, 0, 0, 0, 9, 10, 7, 4, 4, 5, 3, 0, 0, 2, 9 , 7, 1]
natija =  nollar(ls)
print(natija)









