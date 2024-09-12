import  os 
os.system("cls")

a, b, c = map(int, input("3 ta son kiriting  ").split())

if  a >= b and a <= c:
    print("ortacha qiymat:  ", a)
elif a <= b and a >= c:
    print("ortacha qiymat:  ", a)
elif    b >= a and b <= c:
    print("ortacha qiymat:  ", b)
elif    b <= a and b >= c:
    print("ortacha qiymat:  ", b)
elif    c >= a and c <= b:
    print("ortacha qiymat:  ", c)
elif    c <= a and c >=b:
    print("ortacha qiymat:  ", c)
    
    
    