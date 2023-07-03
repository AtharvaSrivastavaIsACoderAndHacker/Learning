import threading
import multithreading
import time
from os import system
from concurrent.futures import ThreadPoolExecutor
system("cls")


# Indicates some task being done
# def func1 (s):
#       time.sleep(s)
#       print(f"DONE {s}\n")
      
      
      
      
# NORMAL CODE
# func1(2)
# func1(3)
# func1(4)


# TIME COUNTER
# time1 = time.perf_counter()



# CODE USING THREADS
# t1 = threading.Thread(target=func1, args=[2])
# t2 = threading.Thread(target=func1, args=[3])
# t3 = threading.Thread(target=func1, args=[4])


# t1.start()
# t2.start()
# t3.start()

# t1.join()
# t2.join()
# t3.join()

# time2 = time.perf_counter()
# print(time2-time1)




# POOLING WITH NORMAL SYNTAX
# def pooling():
#       with ThreadPoolExecutor() as exe:
#             fut1 = exe.submit(func1,3)
#             fut2 = exe.submit(func1,2)
#             fut3 = exe.submit(func1,4)
#             print(fut1.result())
#             print(fut2.result())
#             print(fut3.result())


# POOLING WITH MAP SYNTAX
# def pooling():
#       with ThreadPoolExecutor() as exe:
#             l = [3,2,4]
#             results = exe.map(func1,l)
#             for result in results:
#                   print(result)
       
       
       
       
       
            
# pooling()