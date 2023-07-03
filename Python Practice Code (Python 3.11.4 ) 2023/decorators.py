from os import system
system("cls")


# def izzat(fx):
#       def modFX(*args, **kwargs):
#             print("Good Morning !")      
#             fx(*args, **kwargs)
#             print("Thanks For Using Our Function !")
#       return modFX

# @izzat  #---------------------------------------------------------------------> keyword method
# def bakri(a,b):
#       print(a+b)
   
# bakri(3,4)





def SuPutra(fx):
      def modFX():
            fx()
            print("Good Boy ! !")      
            print("Thanks Bringing Me Sabzi !")
      return modFX

def sabzi():
      print("Mumma !, Mai Sabzi Le Aaya !")
   
sabzi()
print("-------------------")
SuPutra(sabzi)() #---------------------------------------------------------------------> keyword method
