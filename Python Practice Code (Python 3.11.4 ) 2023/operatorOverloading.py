from os import system
system('cls')

# -------------------------------------------------------------------------------------------------------------------------------------

class Vector:
      def __init__(self,i,j,k):
            self.i = i
            self.j = j
            self.k = k
            
      def __str__(self):
            return f"{self.i}i + {self.j}j + {self.k}k" 
      
      def __add__(self,x):
            # return f"{str(x)} + {str(self)} = {self.i + x.i}i + {self.j + x.j}j + {self.k + x.k}k" 
            # |--> not applicable coz vector = vector should also be resulting a vector
            return Vector(self.i + x.i, self.j + x.j, self.k + x.k)
      
      def __sub__(self,x):
            return Vector(self.i - x.i, self.j - x.j, self.k - x.k)
                     
# -------------------------------------------------------------------------------------------------------------------------------------      
            
v = Vector(3,5,6)
v12 = Vector(19,63,23)

# Only For Printing Purposes Actual Vector Is <VectorObj>.<directionVariables> (eg: v12.i)
print(str(v))
print(str(v12))
addResultForPrint = str(v+v12)
subResultForPrint = str(v-v12)
print(f"({str(v)}) + ({str(v12)}) = ({addResultForPrint})")
print(f"({str(v)}) - ({str(v12)}) = ({subResultForPrint})")