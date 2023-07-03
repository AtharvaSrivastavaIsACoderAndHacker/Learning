# initialisations
from os import system
import requests as r
from bs4 import BeautifulSoup as b
system('cls')



# custon url for user to search various products and the url will be modded
query = input("Enter The Product Name : ")
url = f"https://www.amazon.in/s?k={query}"

# getting html
response =  r.get(url)
html = response.text
soup = b(html,'html.parser')



# tells whether the WebScraping has been detected or not
if "It's rush hour and traffic is piling" in html:
      print("WebScraping Has Been Detected !")
      exit()

# extracting and printing links
links = []
for link in soup.find_all('a'):
      links.append(link.get('href')) 
print(links)     
      

# prints html
# print(html)

# prints prettified html
print(soup.prettify())