from os import system
system('cls')







class Employee:
      def __init__(self,name):
            self.name = name
      def empInfo (self):
            print(self.name)

class Dancer:
      def __init__(self,style):
            self.style = style
      def styleInfo (self):
            print(self.style)


class dancerEmployee(Employee,Dancer):
      def __init__(self ,name,style):
            self.name = name
            super().__init__(name)
            self.style = style








print("-----------------------------------------------------------------------")

Harry = dancerEmployee("Haris","Kathak-Kali")
Harry.styleInfo()
Harry.empInfo()

# print(dancerEmployee.mro())

print("-----------------------------------------------------------------------")