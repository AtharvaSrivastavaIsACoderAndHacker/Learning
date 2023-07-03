# foods = []
# while True:
#       food = input("Enter Your Favourite Fruit : ")
#       if food == "quit":
#             break
#       foods.append(food)
# print(foods)

foods = []
while (food := input("Enter Your Favourite Food : ")) != "quit":
      foods.append(food)
print(foods)



      
      
# := aka Walrus Operator is used to assign/change values within an expression
# Walrus :=