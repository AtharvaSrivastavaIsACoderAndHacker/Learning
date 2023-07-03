from os import system
system('cls')



class Person:
      name = "sample name"
      occupation = "sample"
      netWorth = 1
    
      # @property
      # def namee (self):
      #       return self.name

      # def showName(self):
      #       print(self.name)

      # @namee.setter
      # def namee(self,val):
      #       self.name = val

      def set(self,n,o,nt):  
          self.name = n                 
          self.occupation = o            
          self.netWorth = nt            
                                          
      def get(self):                      
          print(self.name)              
          print(self.occupation)        
          print(self.netWorth) 




          
    
# a = Person()
# a.namee = "baburao"
# a.showName()
   
a = Person()
a.set("BabuRao GanpatRao Apte","KhopdiPhudwaneWala",10000000000000000)
a.get()