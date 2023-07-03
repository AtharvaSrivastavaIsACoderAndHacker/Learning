import os
os.system('cls')

# ----------------------------------------------------------------Public----------------------------------------------------------------
# class Employee:
#       def __init__(self, name,id):
#             self.name = name   # ------------------> Public
#             self.id = id       # ------------------> Public
      
      
# e1 = Employee("RohanDas",420)
# e1.get()                               # are public coz they can be accessed from outside the class           





# ----------------------------------------------------------------Private----------------------------------------------------------------
# class Em:
#       def __init__(self, name,id):
# ###         self._name = name   # ------------------> Private
#             self.__name = name   # ------------------> Private and Name Mangled
#             self.id = id    
      
      
# em1 = Em("Rohan",100)
# # print(em1.__name)      # can't be accessed directly     
# print(em1._Em__name)     # this is known as "name mangling" !




# ----------------------------------------------------------------Protected----------------------------------------------------------------

# does nothing and is just a convention used to denote 'protected'