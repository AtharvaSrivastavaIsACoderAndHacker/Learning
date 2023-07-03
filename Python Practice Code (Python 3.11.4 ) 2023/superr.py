from os import system
system('cls')


# Method From Super Class
# class Employee:
#       def __init__(self,name,id):
#             self.name = name
#             self.id = id
#       def show (self):
#             print(self.name+"@"+self.id)
            
# class Programmer(Employee): 
#       def gett(self):
#             super().show()      
#             print("The Programmer Works In Python") 
       
       
            
# e = Employee("RohanDas",'420and69Bhamiya(xdxdxd)')
# e.show()

# print('-----------------------------------------------------------------------')

# p = Programmer('HarryBhaiya','mastPyamreBhamiya')  
# p.gett()




# Super Class's Constructor (eg ----> I have 1 extra attribute for programmer)
# class Employee:
#       def __init__(self,name,id):
#             self.name = name
#             self.id = id
#       def show (self):
#             print(self.name+"@"+self.id)
            
# class Programmer(Employee):
#       def __init__(self,name,id,lang):
#              super().__init__(name,id)
#              self.lang = lang
             
#       def gett(self):
#             super().show()      
#             print(self.lang) s
       
       
            
# e = Employee("RohanDas",'420and69Bhamiya(xdxdxd)')
# e.show()

# print('-----------------------------------------------------------------------')

# p = Programmer('HarryBhaiya','mastPyamreBhamiya','saariLangs')  
# p.gett()