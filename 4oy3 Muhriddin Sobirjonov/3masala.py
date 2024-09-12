import  os
os.system("cls")

n = int (input("N:  "))

for i in range(1, n + 1):
    yig = 1
    print(yig, end="")
    for j in range(2, i + 1):
        if i != 1:
            print(" + ", end="")
            print(j, end="")
            yig += j
    print(" =", yig)

            







