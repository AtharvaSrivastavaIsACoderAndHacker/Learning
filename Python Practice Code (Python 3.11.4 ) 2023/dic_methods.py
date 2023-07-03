from os import system
system("cls")

car1 = {
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964
}
car2 = {
  "brandddd": "Lamborghini",
  "modelSPlaidNhiMODEL": "Sian FKP 37",
  "year": 2019
}


print(car1)
print(car2)


car1.clear()
car1.update(car2)
print('Updated !')

car2.pop("year")
car2.popitem()


print(car1)
print(car2)