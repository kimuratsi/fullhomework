import os
os.system("cls")
import json

file = open("9masala.json", "r")
text = file.read()
natija = json.loads(text)

for i in natija:
    if i["Yiqilgan"] == True:
        print(i, end="\n\n")


file.close()





