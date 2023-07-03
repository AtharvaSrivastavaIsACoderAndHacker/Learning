from os import system
system("cls")


# # Function Declaration -------------------------------------------------------------------------------------
# def geoMean (a,b):
#     print((a*b)/(a+b))

# def greater ():
#       x = int(input("Enter No. 1 !:- "))
#       y = int(input("Enter No. 2 !:- "))
#       match x,y:
#             case _ if x>y:
#                   print(x," Is Greater !")
#             case _ if y>x:
#                   print(y," Is Greater !")
#             case _:
#                   print("No One's Greater Than Shiva The Almighty !")



# def baadMeinBanaunga ():
#       pass      # pass keyword makes the interpreter ignore that empty def function



# # Function Call---------------------------------------------------------------------------------------------
# geoMean(17,12)
# greater()





# # function arguments----------------------------------------------------------------------------------------
# def average ():
#     x = int(input("Enter No. 1 !:- "))
#     y = int(input("Enter No. 2 !:- "))
#     print((x+y)/2)


# average()





# default arguments -----------------------------------------------------------------------------------------
def average (x=10,y=12):
    print((x+y)/2)

average(20,24)
# it will override the default args as this one's are explicit !
#  default args are only to serve as values when val is'nt given explicitly