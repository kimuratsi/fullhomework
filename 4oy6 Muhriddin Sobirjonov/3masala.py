import os
os.system("cls")

n = input("Harf:   ")
if ord(n) == 98 or ord(n) == 99 or ord(n) == 101:
    print("a")
elif ord(n) == 97 or ord(n) >= 100 and ord(n) <= 103 or ord(n) == 105:
    print("e")
elif ord(n) >= 104 and ord(n) <= 108 or ord(n) == 111:
    print("i")
elif ord(n) >= 109 and ord(n) <= 114 or ord(n) == 117:
    print('o')
elif ord(n) >= 115 and ord(n) <= 122:
    print('u')




