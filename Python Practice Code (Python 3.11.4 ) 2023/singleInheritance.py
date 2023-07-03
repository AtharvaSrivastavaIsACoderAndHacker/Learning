from os import system
system('cls')





class Animal:
      def __init__(self,name,species,):
            self.name = name
            self.species = species
      def makeSound (self,):
            print("sound")
      # This Class Instance Should Have Name & Species As Attributes
      
      
class Dog(Animal):
      def __init__(self, name, species, breed):
            super().__init__(name, species)
            self.breed = breed
      def makeSound (self):
            print("Bark Bhou bark Bhou !!!!!!!!!!!")
      # This Class Instance Should Have Name, Species & Breed As Attributes


class Cat(Animal):
      def __init__(self, name, species):
            super().__init__(name, species)
      def makeSound (self):
            print("Meow Meow !!!!!!!!!!")
      def nightVision (self):
            print("nightVision Active")
      # This Class Instance Should Have Name And Species As Attributes






print("-----------------------------------------------------------------------")
A = Animal("Doggu","Dog")
A.makeSound()
aAttr = A.__dict__
for attr in aAttr:
      print(f"{str(attr)} = {aAttr[attr]}")
print("-----------------------------------------------------------------------")
Tommy = Dog("Tommy","Dog", "German Shepherd")
Tommy.makeSound()
tommyAttr = Tommy.__dict__

for attr in tommyAttr:
      print(f"{str(attr)} = {tommyAttr[attr]}")
      
print("-----------------------------------------------------------------------")
Mau = Cat("Mau","Cat")
Mau.makeSound()
mauAttr = Mau.__dict__

for attr in mauAttr:
      print(f"{str(attr)} = {mauAttr[attr]}")
print("-----------------------------------------------------------------------")