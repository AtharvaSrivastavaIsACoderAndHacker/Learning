from os import system
system("cls")

marks = [34,56,12,100,29,20,48]





# index = 0
# for mark in marks:
#     print(mark)
#     if(index == 3):
#         print("Awesome Work Atharva !")
#     index = index+1



# enumerate(marks, start=1) -------------------------> here if you specify this "start" argument then inde will start from the value give ! by defau;t it's satrt is 0




for index,mark in enumerate(marks):
    print(mark)
    print("Awesome Work Atharva !") if index == 3 else ""