from os import system
system("cls")

class Karamchari:
      
      company = "Apple"
      def showInfo(self):
            print(f"{self.name}@{self.company}")
      
      @classmethod
      def editCompany(cls,newCompany):
            cls.company = newCompany



e1 = Karamchari()
e1.name = "harry"
e1.editCompany("microsoft") # This Line Edited The Original Class Coz The ClassMethod Provided It The Original Class Instead Of Giving A Copy !
e1.showInfo()

# Karamchari.editCompany(Karamchari,"CompanyKaDirectlyEditKarDiya")
print(Karamchari.company)