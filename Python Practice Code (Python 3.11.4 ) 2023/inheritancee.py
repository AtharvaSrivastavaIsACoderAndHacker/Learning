class Employee:
      def __init__(self, name,id):
            self.name = name
            self.id = id
            
      def get(self):
            print(f"The Employee's Name For The Employee ID {self.id} is {self.name}")


class Programmer(Employee):       
      def gett(self):
            super().get()   # --------> ye super maine baad me sikha hai mai 5 din pehle ke code ko edit kar raha hu
            print("The Programmer Works In Python")   
                       
                      
                        
e1 = Employee("RohanDas",420)
e1.get()

print('-------------------------------------------------------------------------------------------------------')

e2 = Employee("Ansh Yadav",69)
e2.get()


print('-------------------------------------------------------------------------------------------------------')

      
p1 = Programmer("alex",100)
p1.gett()

