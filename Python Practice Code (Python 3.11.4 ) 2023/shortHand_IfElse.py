a = int(input("Enter 1st Value : "))
b = int(input("Enter 2nd Value : "))


# if(a>b):
#     print("A")
# else:
#     if(a==b):
#         print("=")
#     else:
#         print("B")
#



# print("A") if a>b else "" -------------------------------> we have to write like this else even if we don't want to use the else block ! 
# c = 9 if a>b else 0 -------------------------------------> can also be use directly in variable assignment pehle if ke andar krna padta tha !


print("A") if a>b else print("=") if a == b else print("B")