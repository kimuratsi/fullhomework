import  os
os.system("cls")

tp = [(),(),()]
for i in range(3):
    son = input("N:  ").split()
    tp[i] = tuple(son)
print(tp)
for i in range(len(tp)):
    ls = list(tp[i])
    ls.pop()
    ls.append("100")
    tp[i] = tuple(ls)

print(tp)












