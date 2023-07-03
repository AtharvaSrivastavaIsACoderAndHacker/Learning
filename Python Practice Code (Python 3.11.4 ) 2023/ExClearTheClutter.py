# this code needs a cluttery folder in order to clear it


import os
os.system("cls")
folder = os.listdir('clutter')
print(folder)
i = 0
for f in folder:
      if f.endswith(".txtx"):
            os.rename(f"clutter/{folder[i]}", f"clutter/{i}")
            print(folder[i])
            i+=1