import  os
os.system("cls")

text = input("matn:   ")
a = 0 ; e = 0 ; i = 0 ; u = 0 ; o = 0
for j in text:
    if j == 'a' or j == 'A':
        a += 1
    elif j == 'e' or j == 'A':
        e += 1
    elif j == 'i' or j == 'I':
        i += 1
    elif j == 'u' or j == 'U':
        u += 1
    elif j == 'o' or j == 'O':
        o += 1

if a != 0:
    print(f"A harfi:  {a} ta")
if e != 0:
    print(f"E harfi:  {e} ta")
if u !=0:
    print(f"U harfi:  {u} ta")
if i !=0:
    print(f"I harfi:  {i} ta")
if o != 0:
    print(f"O harfi:  {o} ta")


