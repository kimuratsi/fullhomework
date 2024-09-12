import os
os.system("cls")

ls = [[1, "Jean Castro", "V"], [2, "Lula Powell", 'V'], [3, "Brain Howell", 'VI'], [4, "Lynne Foster", 'VI'], [5, "Zachary Simon", "VII"]]
ls1 = []

for i in ls:
    dic = {i[0] : i[1:]}
    ls1.append(dic)

print(ls1)





