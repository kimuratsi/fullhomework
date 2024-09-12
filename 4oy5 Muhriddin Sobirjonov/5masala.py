import os 
os.system("cls")
ls1 = []
ls = ['abcd', 'abc', 'bcd', 'bkie', 'cder', 'cdsw', 'sdfsd', 'dagfa', 'acjd']
for i in ls:
    for j in range(len(i)):
        if  j == 0 and i[j] == 'a':
            ls1.append(i)
print(ls1)
ls1.clear()
for i in ls:
    for j in range(len(i)):
        if  j == 0 and i[j] == 'b':
            ls1.append(i)
print(ls1)
ls1.clear()
for i in ls:
    for j in range(len(i)):
        if  j == 0 and i[j] == 'c':
            ls1.append(i)
print(ls1)
ls1.clear()
for i in ls:
    for j in range(len(i)):
        if  j == 0 and i[j] == 'd':
            ls1.append(i)
print(ls1)










