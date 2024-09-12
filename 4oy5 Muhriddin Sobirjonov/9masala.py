import os 
os.system("cls")

def sonlar(ls: list ):
    for j in ls:
        if ls.count(j) == 1:
            ls.remove(j)
    print(ls)

ls = [int(input()) for i in range(int(input("N:   ")))]
os.system("cls")
print(ls, end="\n\n")
sonlar(ls)





