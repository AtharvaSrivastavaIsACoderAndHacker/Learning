# # FOR LOOPPPPPP

# name = "Atharva"
# for i in name:
#     print(i)

# colors = ["red","green","blue"]
# for color in colors:
#     print(color)
#     for i in color:
#         print(i,end=", ")
#     print("\n")

# for h in range(100):
#     print(h+1)

# for h in range(2,4):
#     print(h+1)

# for h in range(1,10,10):
#     print(h+1)

# # step operator here, is used for increasing the values counted by python per step









# # WHILE LOOPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP

# i = 0
# while (i<1000):
#     print(i)
#     i=i+1

# # decrementing loop 
# i = 5
# while (i>0):
#     print(i)
#     i = i-1

# # while with else 
# i = 0
# while(i<20):
#     print(i)
#     i = i+1  
# else:
#     print("i bada khatarnaak hai !")














# BREAK STATEMENT

# for i in range(20):
#     print(i)-------------------------------------------------------> this is the common mistake as if i = 10 then first it will print 10 the see   
#     if i == 10:                                                      break so it will print 10 then break !
#         break

# for i in range(20):
#     if i == 10:------------------------> correct !
#     break
#     print(i)









# CONTINUE STATEMENT


# for i in range(20):
#     print(i)-------------------------------------------------------> this is the common mistake as if i = 10 then first it will print 10 the see   
#     if i == 10:                                                      continue so it will go yo 11 and be of no use cause 10 will not be skipped !
#         continue

# for i in range(20):
#     if i == 10:        #---------------------------------------> this is the correct way as in loops first we check conditions so likewise
#         continue       #                                         if there is a condition inside the loop too so first check in before action !
#     print(i) -------> action