import os 
os.system("cls")

def sonlar(ls: list):
    ls = set(ls)
    ls = list(ls)
    ls.sort()
    print(ls)

ls = [int(input()) for i in range(int(input("N:  ")))]
os.system("cls")
print(ls, end="\n\n")
sonlar(ls)





