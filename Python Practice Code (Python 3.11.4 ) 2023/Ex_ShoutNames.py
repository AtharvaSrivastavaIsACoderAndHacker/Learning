# USING WIN32COM.CLIENT MODULE FOR WINDOWS

# from os import system
# import win32com.client
# system("cls")

# speaker = win32com.client.Dispatch("SAPI.SpVoice")

# def speakWin32(audio):
#     speaker.Speak(audio)
    
    
    
# if __name__ == '__main__':
#       print("Keep Feeding Names And Press Enter ! Type 'Done' And Press Enter If You're Done With The Name !!!!!!!!!!!")
#       l = []      
#       while (i := input("Name : ")) != 'Done':
#                   l.append(i)
#       speakWin32(l)
      
      
      
      
      
      
      
      
# USING WIN32COM.CLIENT MODULE   

# import pyttsx3

# engine = pyttsx3.init('sapi5')
# voices = engine.getProperty('voices')
# engine.setProperty('voice', voices[0].id)

# def speakPyttsx3(audio):
#     engine.say(audio)
#     engine.runAndWait()


# if __name__ == '__main__':
#       print("Keep Feeding Names And Press Enter ! Type 'Done' And Press Enter If You're Done With The Name !!!!!!!!!!!")
#       l = []      
#       while (i := input("Name : ")) != 'Done':
#                   l.append(i)
#       speakPyttsx3(l)
      
      
     
     
     
      


# FOR MAC

# import os
# print("Keep Feeding Names And Press Enter ! Type 'Done' And Press Enter If You're Done With The Name !!!!!!!!!!!")
# l = []      
# while (i := input("Name : ")) != 'Done':
#             l.append(i)
# for i in l:
#       os.system(f"say {i}")