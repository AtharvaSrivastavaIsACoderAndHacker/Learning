import os
os.system('cls')

# this code will do same as the previous (oops.py) but with a short and efficient way !
#  a = Person("","",1) ------------> sample code line to create an object

class Person:
      def __init__(self,n,o,nt):
            self.name = n
            self.occ = o
            self.net = nt
            
      def info (self):
            print(f"{self.name} is a {self.occ} and his net worth is Rupees",self.net)
            
            

a = Person("Harry","MastCoder",1000000000000)
a.info()