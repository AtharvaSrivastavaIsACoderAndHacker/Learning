# # YE NORMAL FUNCTION BANANA HAI ! 
# # ye poora sahi tarika hai !
# def average (a,b):
#     print((a+b)/2)

# a = 13
# b= 17
# average(a,b)
# # iss tarike mein parameters naa daalen tobhi chalega kyuki value naa dene par default hi use ho jaa rha hai !
# def averatte (a=13,b=17):
#     print((a+b)/2)
# averatte(a,17)





# USING VAR ARGS !
def aver(*numbers):
    sum = 0
    for i in numbers:
        sum = sum + i
    return sum/len(numbers)

print(aver(3,243,32,356,23,565))











def aver(**name): # with double star and the key value pairs made a dictionary
      pass


