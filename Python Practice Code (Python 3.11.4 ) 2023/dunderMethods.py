from os import system
system('cls')






class Employee:
      def __init__(self,name):
            self.name = name

      def __len__(self):
            i = 0
            for c in self.name:
                  i = i+1
            return i
      
      def __str__(self):
            return self.name+" : str"
      
      def __repr__(self):
            return self.name+" : repr"
      
      
      
e = Employee('harry')
print(len(e))
print(str(e))
print(repr(e))







ij = 345
print(str(ij))  # -----------------> works normally outside the class