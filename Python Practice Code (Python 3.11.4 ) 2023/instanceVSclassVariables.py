class Employee:
      companyName = "Apple"     # -------------------------------------> Class Variable
      def __init__(self,name):
            self.name = name    # -------------------------------------> Instance Variable
            # print("done")
      
      def get(self):
            print(self.name,self.companyy)
            
      def editCompany(self,newCompany):
            self.companyy = newCompany
            

Emp1 = Employee("Rohan_420_69")
# Emp1.editCompany("Microsoft")
Emp1.get()