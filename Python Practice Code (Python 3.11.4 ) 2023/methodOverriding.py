from os import system
system("cls")


class Shape:
      def __init__(self,len,bre):
            self.len = len
            self.brea = bre
      def area(self):
            return self.len*self.brea
      
class Circle(Shape):
      def __init__(self, rad):
            self.rad = rad
            
      def area (self):
            return 3.1415926 * ((self.rad)*2)  # ---------------------------------> Override Kar Diya !    
           
      
      
      
      
hamaraRectangle = Shape(5,3)
print(hamaraRectangle.area())

hamaraCircle = Circle(15)
print(hamaraCircle.area())