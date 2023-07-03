from os import system
system("cls")

a = int(input("Enter The Number To Generate Table Of That Number :-"))
print(f'Multiplication Table Of {a} Is  ')


try:
      for i in range(11):
            print(f"{int(a)} X {int(i)} = {int(a*i)}")
            i = i+1
except Exception:
      print(Exception)