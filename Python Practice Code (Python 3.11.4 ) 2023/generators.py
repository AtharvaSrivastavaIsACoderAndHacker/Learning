def my_generator():
      for i in range(5): # ---------------------> Object Creation
            yield i



gen = my_generator()     # ---------------------> Object Initialisation

# print(next(gen))
# print(next(gen))       # ---------------------> Printing It 1by1 Manually Using "next" keyword
# print(next(gen))

for j in gen:            # ---------------------> Printing It Using A Loop  
      print(j)