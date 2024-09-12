import      os
os.system("cls")

son = int (input("Bitta son kiriitng   "))


if  son % 3 == 0 and son % 5 == 0:
    print("FIZZBUZZ")
elif  son % 3 == 0:
    print("FIZZ")
elif    son % 5 == 0:
    print("BUZZ")
else:
    print("Kiritilgan son 3 ga ham 5 ga ham bolinmaydi")







