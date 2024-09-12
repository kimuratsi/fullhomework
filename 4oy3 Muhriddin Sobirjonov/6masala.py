import  os
os.system("cls")

n = int (input("son:  "))
tub = []
son1 = 0
for i in range(n + 1, n + 100):
    d = 1; son = 0
    while d <= i:
        if i % d == 0:
            son += 1
        d  += 1
    if son == 2:
        tub.append(i)
        son1 += 1
        if son1 == 5:
            break
print(tub)





