# def factorial (a):
#     if (a==0 or a==1):
#         return 1
#     else:
#         return a * factorial(a-1) 


# print(factorial(5))  



# ---------------------------------------------------------> Fibonacci Series
def fibonacci(n):
    if (n == 1 or n == 0):
        return n
    else:
        return fibonacci(n-1)+fibonacci(n-2)

for i in range(int(input("Enter The Value : "))):
    print(fibonacci(i))
