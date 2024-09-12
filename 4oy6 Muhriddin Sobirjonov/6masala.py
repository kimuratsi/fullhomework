import os
os.system("cls")

ls = ['anvar', 'Aziz', 'Aziza', 'Madina', 'Anora', 'Azima', 'Adham', 'Akmal', 'Salohiddin']
print(ls)
ls1 = list(filter(lambda x: x[0] == 'A' and x[-1] == 'a', ls))
print(ls1)