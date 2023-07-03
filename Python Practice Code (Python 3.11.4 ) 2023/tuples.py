a = (1,5,2) #----------------------------------> a normal tupple
print(type(a), a) #----------------------------> will return class tuple !


a = (1) #--------------------------------------> an integer (because there is only one value)
print(type(a), a) #----------------------------> will return class int !


a = (1,) #------------------------===----------> a normal tupple because it has a comma !
print(type(a), a) #----------------------------> will return class tuple !


a = (1,5,2)



print(a[0]) 
print(a[2])

if 5 in a:
    print('arre yahi hai !')


tup = a[0:1]
print(tup)