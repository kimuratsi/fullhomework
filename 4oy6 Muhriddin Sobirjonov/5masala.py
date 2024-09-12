import os
os.system("cls")

ls = list(map(int, input("N:   ").split()))
ls1 = list(filter(lambda x: x % 2 != 0, ls))
ls2 = list(filter(lambda x: x % 2 == 0, ls))
print( "Toqlar:  " ,ls1, "\n", "Juftlar:  ", ls2)








