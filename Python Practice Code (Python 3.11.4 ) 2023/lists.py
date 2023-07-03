l = [8,'Atharva',33.33,10,45,True]
print(l)
print(type(l))
print(l[0])
print(l[1])
print(l[2])
print(l[-1])
print(l[len(l)-1])

if 8 in l:   # same works for strings as well !
    print('yes')
else:
    print('no')


print(l[1:4])
print(l[1:4:2]) # third value is jump index 


lst = [i*i for i in range(10)]
print(lst)


lst = [i*i for i in range(10) if i%2 == 0]
print(lst)