import os
os.system("cls")

son = int(input("Son kiriting:(0 < x < 10000)     "))
ls = ['', 'bir', 'ikki', 'uch', 'tort', 'besh', 'olti', 'yetti', 'sakkiz', 'toqqiz']
ls1 = ['', 'on', 'yigirma', 'ottiz', 'qirq', 'ellik', 'oltmish', 'yetmish', 'sakson', 'toqson']
ls2 = ['', 'yuz', 'ming']
ls3 = list()
if son // 1000 > 0:
    ls3.append(ls[son // 1000])
    ls3.append(ls2[2])
if (son % 1000) // 100 > 0:
    ls3.append(ls[(son % 1000) // 100])
    ls3.append(ls2[1])
if (son % 100) // 10 > 0:
    ls3.append(ls1[(son % 100) // 10])
if son % 10 > 0:
    ls3.append(ls[son % 10])
     
print(' '.join(ls3))




