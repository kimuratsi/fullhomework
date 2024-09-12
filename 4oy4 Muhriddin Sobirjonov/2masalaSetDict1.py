import os
os.system("cls")

ls = [int(input()) for i in range(int(input("N:  ")))]
ls1 = list(map(str, ls))

ls1.sort( key=lambda x: x * 10, reverse= True ) 
son = ''.join(ls1)
print(son)
 

    

