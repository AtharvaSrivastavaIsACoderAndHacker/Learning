x = 10
def faltuKaFunction ():
    global x
    x = 100
#     x = 5 # ---------------------------------------------------------------------------------> local variable
    print(x)
    print("Mai ek faltu ka function hu !")



print(x)
faltuKaFunction()