import os
os.system('cls')

print("Welcome To Atharva's Calculator")
print("-----------------------------------------------")


num1 = int(input("Enter Number 1 :- "))
op = input("Enter Operator :- ")
num2 = int(input("Enter Number 2 :- "))

if op=='+':
    print(num1+num2)
elif op=='-':
    print(num1-num2)
elif op=='*':
    print(num1*num2)
elif op=='/':
    print(num1/num2)      
else :
    print("Invalid Operator, Try Again !")



print("Thanks For Using My Calculator !")
print("-----------------------------------------------")