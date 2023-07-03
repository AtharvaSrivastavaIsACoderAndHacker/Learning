import asyncio
from os import system
system("cls")
import requests

# async def func1 ():
#       await asyncio.sleep(2)  # -------------> same as time.sleep(2)
#       print("func1")
      
# async def func2 ():
#       await asyncio.sleep(2)
#       print("func2")


async def func1 (urll,filename):
      image_url = urll
      r = requests.get(image_url)
      file = filename+".jpg"
      with open(file,'wb') as f:
            f.write(r.content)
      f.close()
      
async def func2 (urll,filename):
      image_url = urll
      r = requests.get(image_url)
      file = filename+".jpg"
      with open(file,'wb') as f:
            f.write(r.content)
      f.close()
      
async def main():
      # task = asyncio.create_task(func1) # -> schedules the task and this will execute whenever it (program) gets time So NO PROPER ORGANIZATION !
      # await func1() 
      # await func2()
      ll = await asyncio.gather(
            func1("https://som.iitkgp.ac.in/images/Admissions%20Open.jpg","1"),
            func2("https://som.iitkgp.ac.in/images/Admissions%20Open.jpg","2")
      )
      print(ll)
      
      
      
      
asyncio.run(main())

