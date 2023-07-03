from os import system
system("cls")
    
# Using Only 1 Constructor     
# class Employee:
#       def __init__(self,name,id):
#             self.name = name
#             self.id = id                        
                  
#       def get(self):
#             print(self.name,self.id)
      
      
      

# e = Employee("HarryBhaiya","Haris@Harry_420_69")
# e.get()

# empData = "HarryBhaiya---Haris@Harry_420_69"     
# e1 = Employee(empData.split("---")[0] , empData.split("---")[1])
# e1.get()
      
            
                  
                        

# Using Alt Constructors
class Employee:
      def __init__(self,name,id):
            self.name = name
            self.id = id
            
      @classmethod
      def fromStr (cls,string):
            return cls(empData.split("---")[0] , empData.split("---")[1])
            
                  
                  
      def get(self):
            print(self.name,self.id)
      
      
      

e = Employee("HarryBhaiya","Haris@Harry_420_69")
e.get()

empData = "HarryBhaiya---Haris@Harry_420_69"     
e1 = Employee.fromStr(empData)
e1.get()