from os import system
system("cls")

num1 = int(input("Enter Any Number Between 10 & 20 : "))
if (num1<10 or num1>20):
    raise ValueError("It Should Be Between 10 & 20 !")