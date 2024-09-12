import os
os.system("cls")

n = int (input("N:  "))
yig = 0
son = 2
for i in range(1, n + 1):
    if i != n:
        print(son, end=" + ")
    else:
        print(son, end=" = ")
    yig += son
    son = son * 10 + 2
print(yig)
    
    






