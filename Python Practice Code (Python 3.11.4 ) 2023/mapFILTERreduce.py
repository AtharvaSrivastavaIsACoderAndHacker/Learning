# MAPPPPPPPPP

# def cube (x):
#     return x*x*x

# l = [1,2,3,4,5,6,7,8,9]    # 
# outl = []                   #
# for i in l:                 #
#     outl.append(cube(i))    # -------------> NORMAL PROCESS TO RETURN AN OUTPUT LIST CONTAINING THE CUBE A NUMBERS IN THE SOURCE LIST !
# print(l)                    #
# print(outl)                 #


# l = [1,2,3,4,5,6,7,8,9]      #
# newl = list(map(cube, l))     #
# print(l)                      # -------------------> USING MAP FUNCTION
# print(newl)                   #







# FILTERRRRRR

# def filter_function(a):
#     return a>4
# l = [1,2,3,4,5,6,7,8,9]

# nl = list(filter(filter_function,l))
# print(nl)





# # REDUCEEEEEEEEE
# from functools import reduce
# rl = [1,2,3,4,5,6,7,8,9]
# def mul(a,b):
#     return a*b
# output = reduce(mul, rl)
# print(output)