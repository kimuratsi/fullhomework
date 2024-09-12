import os
os.system("cls")

def dublikatlar(ls: list):
    ls1 = []
    [ls1.append(l) for l in ls if l not in ls1] 
    return ls1

ls = [[10, 20], [40], [30, 56, 25], [10, 20], [33], [40]]
print(ls, end="\n\n\n")
natija = dublikatlar(ls)
print(natija)







