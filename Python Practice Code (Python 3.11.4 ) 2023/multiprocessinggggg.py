# NORMAL AND SLOW METHOD (GETS EXECUTED 1by1)

# import requests
# def download (urll,filename):
#       image_url = urll
#       r = requests.get(image_url)
#       file = filename+".jpg"
#       with open(file,'wb') as f:
#             f.write(r.content)
#       f.close()

# urls = ["https://som.iitkgp.ac.in/images/71stFoundationDay.jpg","https://som.iitkgp.ac.in/images/Abhinay.jpg","https://som.iitkgp.ac.in/images/Admissions%20Open.jpg","https://som.iitkgp.ac.in/images/Ashiq.jpg","https://som.iitkgp.ac.in/images/DD2021.png","https://som.iitkgp.ac.in/images/Dean%20Prof%20V%20N%20A%20Naikan.jpeg"]

# for i,url in enumerate(urls):
#       download(url,str(i))


# -------------------------------------------------------------------------------------------------------------------------------------------------
# -------------------------------------------------------------------------------------------------------------------------------------------------
# -------------------------------------------------------------------------------------------------------------------------------------------------
# -------------------------------------------------------------------------------------------------------------------------------------------------
# -------------------------------------------------------------------------------------------------------------------------------------------------



# FAST MULTIPROCESSING METHOD (PARALLEL PROCESSING)

# from os import system
# system("cls")


# import multiprocessing
# import requests

# def download(urll, filename):
#     print(f"Started Downloading {filename}")
#     image_url = urll
#     r = requests.get(image_url)
#     file = filename + ".jpg"
#     with open(file, 'wb') as f:
#         f.write(r.content)
#     print(f"Finished Downloading {filename}")

# if __name__ == '__main__': # -----------------------------------------------> this is important to run multiprocessing in windows
#     urls = ["https://som.iitkgp.ac.in/images/71stFoundationDay.jpg",
#             "https://som.iitkgp.ac.in/images/Abhinay.jpg",
#             "https://som.iitkgp.ac.in/images/Admissions%20Open.jpg",
#             "https://som.iitkgp.ac.in/images/Ashiq.jpg",
#             "https://som.iitkgp.ac.in/images/DD2021.png",
#             "https://som.iitkgp.ac.in/images/Dean%20Prof%20V%20N%20A%20Naikan.jpeg"]

#     processes = []

#     for i, url in enumerate(urls):
#         p = multiprocessing.Process(target=download, args=(url, str(i)))
#         p.start()
#         processes.append(p)

#     for p in processes:
#         p.join()
        
        
        



# -------------------------------------------------------------------------------------------------------------------------------------------------
# -------------------------------------------------------------------------------------------------------------------------------------------------
# -------------------------------------------------------------------------------------------------------------------------------------------------
# -------------------------------------------------------------------------------------------------------------------------------------------------
# -------------------------------------------------------------------------------------------------------------------------------------------------


# FAST MULTIPROCESSING METHOD (PARALLEL PROCESSING) USING PROCESS_POOL_EXECUTOR

# from os import system
# system("cls")


# import multiprocessing
# import requests
# from concurrent.futures import ProcessPoolExecutor


# def download(urll, filename):
#     print(f"Started Downloading {filename}")
#     image_url = urll
#     r = requests.get(image_url)
#     file = filename + ".jpg"
#     with open(file, 'wb') as f:
#         f.write(r.content)
#     print(f"Finished Downloading {filename}")

# if __name__ == '__main__': # -----------------------------------------------> this is import to run multiprocessing in windows
#       urls = ["https://som.iitkgp.ac.in/images/71stFoundationDay.jpg",
#             "https://som.iitkgp.ac.in/images/Abhinay.jpg",
#             "https://som.iitkgp.ac.in/images/Admissions%20Open.jpg",
#             "https://som.iitkgp.ac.in/images/Ashiq.jpg",
#             "https://som.iitkgp.ac.in/images/DD2021.png",
#             "https://som.iitkgp.ac.in/images/Dean%20Prof%20V%20N%20A%20Naikan.jpeg"]



#       # POOLING WITH MAP SYNTAX
#       def pooling():
#             with ProcessPoolExecutor() as exe:
#                   l = []
#                   for i in range(len(urls)):
#                         l.append(i)
#                   results = exe.map(download,urls,str(l))
#                   for result in results:
#                         print(result)
                  
#       pooling()