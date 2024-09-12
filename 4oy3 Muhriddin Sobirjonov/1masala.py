import  os
os.system("cls")

lst = [2,1,3,45,69,15,4,5,6,7,8,9,10]

n = int (input("N:   "))

for i in range(len(lst)):
    for j in range(i + 1, len(lst)):
        if lst[i] + lst [j] == n:
            print(i , "  ", j )












