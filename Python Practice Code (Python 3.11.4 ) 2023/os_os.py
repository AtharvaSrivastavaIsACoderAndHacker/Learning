import os

# --------------------------------------------Creation And Subfolder creation--------------------------------------------------------->
# os.mkdir("data") if not os.path.exists("data") else ""
# for i in range(0,100):
#     os.mkdir(f"data/day {i+1}")





# -----------------------------------------------RENAME------------------------------------------------------------------------------>
      # os.rename(f"data/day {i+1}",f"data/tutorial {i+1}")
      # os.rename(f"data/tutorial {i+1}",f"data/day {i+1}")


# -----------------------------------------------Accessing Subfolder's files------------------------------------------------------------------------------>
# folders = os.listdir("data")
# for index,i in enumerate(folders, start=1):
#       file = "data/day "+str(index)
#       print(i , os.listdir(file))