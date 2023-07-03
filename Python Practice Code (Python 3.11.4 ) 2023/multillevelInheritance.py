from os import system
system('cls')


class Animal:
      def __init__(self,name,species):
            self.name = name
            self.species = species
      def get (self):
            print(self.name)
            print(self.species)
      # This Class Instance Should Have Name & Species As Attributes
      
      
class Dog(Animal):
      def __init__(self, name,species,breed):
            Animal.__init__(self,name, species)
            self.breed = breed
      def get (self):
            Animal.get(self)
            print(self.breed)
      # This Class Instance Should Have Name, Species & Breed As Attributes
      
class DogColour(Dog):
      def __init__(self,name,species,breed,colour):
            Dog.__init__(self, name,species,breed)
            self.colour = colour
      def get (self):
            Dog.get(self)
            print(self.colour)
      # This Class Instance Should Have Name, Species & Breed As Attributes

class DogAge(Dog):
      def __init__(self,name,species,breed,colour,age):
            DogColour.__init__(self, name,species,breed,colour)
            self.age = age
      def get (self):
            DogColour.get(self)
            print(self.age)
      # This Class Instance Should Have Name, Species & Breed As Attributes

class DogFinal(Dog):
      def __init__(self,name,species,breed,colour,age,owner):
            DogAge.__init__(self, name,species,breed,colour,age)
            self.owner = owner
      def get (self):
            DogAge.get(self)
            print(self.owner)
      # This Class Instance Should Have Name, Species & Breed As Attributes

def printDict (obj):
      dict = obj.__dict__
      for attr in dict:
            print(f"{str(attr)} = {dict[attr]}")





print("-----------------------------------------------------------------------")
Oreo = DogFinal("Oreo","Dog","GermanShepherd","White",3,"Sourav Joshi")
printDict(Oreo)
print("-----------------------------------------------------------------------")
Pompu = DogFinal("Pompu","Dog","Labrador","Black-Brown",2,"Anshu")
printDict(Pompu)
print("-----------------------------------------------------------------------")