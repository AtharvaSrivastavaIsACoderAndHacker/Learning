import os
os.system('cls')
import webbrowser


def openInChrome(url):
    path = "C:\Program Files\Google\Chrome\Application\chrome.exe"
    webbrowser.register('chrome', None,webbrowser.BackgroundBrowser(path))
    webbrowser.get('chrome').open_new_tab(url)
    
url = input("Enter The URL : ")

openInChrome(url)