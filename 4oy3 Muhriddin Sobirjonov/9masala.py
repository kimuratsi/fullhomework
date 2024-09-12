import  os
os.system("cls")

tp = tuple(input("malumotlar:   ").split())
print(tp)
n = 0
for i in range(len(tp)):
    n += 1
    if n % 4 == 0:
        print("boshidan 4chi element:  ", tp[i])
        break
k = len(tp)
ls = list(tp)
ls.reverse()
for i in range(len(ls)):
    n += 1
    if n % 4 == 0:
        print("oxiridan 4chi element:  ", ls[i])
        break
ls.reverse()
tp = tuple(ls)
print(tp)



