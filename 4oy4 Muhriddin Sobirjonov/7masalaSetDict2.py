import os
os.system("cls")

n = int(input("dictionary malumotlari soni:   "))
key = []
val = []
for i in range(n):
    k = int(input("kalit:  "))
    key.append(k)
    v = int(input("qiymat: "))
    val.append(v)
    
dic = dict(zip(key, val))
print(dic)
mink = min(dic)
dic.pop(mink)
maxk = max(dic)
dic.pop(maxk)
print(dic)










