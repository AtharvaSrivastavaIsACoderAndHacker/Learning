def getNums():
    str = input()
    nums = []
    for i in str.split(" "):
        nums.append(int(i))
    return nums

nums = getNums()





if (not(1 <= nums.len() )):
       print("Enter atleast a single value !")
       nums = getNums()
elif(not(nums.len() <= 2000)):
    print("Enter values<=2000 !")
    nums = getNums()



for i in nums:
    if not(-2000 <= i):
        print("Values Should Range From -2000 to 2000 !")
        nums = getNums()
    elif not(i <= 2000):
        print("Values Should Range From -2000 to 2000 !")
        nums = getNums()



pos = 0
neg = 0

for i in nums:
    if(i>0):
        pos+=1
    elif(i<0):
        neg+=1
    
    
print(max(pos,neg))