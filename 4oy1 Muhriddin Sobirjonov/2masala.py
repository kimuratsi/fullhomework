import  os
os.system("cls")

a, b, c = map(int, input("3 ta son kiriting:   ").split())

if  a >= b and a > c:
    print("eng katta son  ", a)
elif    b >= a and b >= c:
    print("Eng katta son  ", b)
elif    c >= a and c >= b:
    print("Eng katta son  ", c)