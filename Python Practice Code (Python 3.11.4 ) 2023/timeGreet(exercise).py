import time

currentHour = int(time.strftime('%H'))
if currentHour >= 0 and currentHour <= 11 :
    print('Good Morning')
elif currentHour >=12 and currentHour <= 16 :
    print('Good AfterNoon')
elif currentHour >= 17 and currentHour <=21 :
    print('Good Evening')
else :
    print('Good Ninni')