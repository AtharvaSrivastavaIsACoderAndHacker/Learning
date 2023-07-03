tup1 = (1,2,3,4)
tup2 = (3,4,3,4)




tuplet = tup1 + tup2
print(tuplet)

print(tuplet.count(2)) #------------------------------> finding no. of 2's in the tuple
print(tuplet.index(3)) #------------------------------> basically it's indexof type method where it's showing the first occurence of 4



print(tuplet.index(4, 4,8)) #-------------------> Here the 1st value is whatever we have to find out and 8,4 are is indexes of range for scanning !

print(len(tuplet))