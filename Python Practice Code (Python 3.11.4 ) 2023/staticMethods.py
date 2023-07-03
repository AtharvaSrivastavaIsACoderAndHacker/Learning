class gadit:
      def __init__(self,nm):
            pass
                
      @staticmethod         
      def numCube(num):
            return num*num*num  
      

a = gadit(5).numCube(int(input("Enter The Number To Cube : ")))    # ----------------|
print(a)                                                           #                 |
#                                                                  #                 |-|+++++>     these both are same but written differently
#                                                                  #                 |-|+++++
a = gadit(5)                                                       #                 |
print(a.numCube(3))                                                # ----------------|