#APPENDABLE ----------------------------------------------------------------
q = ["Where is Nepal ?",
     "rasode mein kon tha ?",
     "spammper ko kitni chappal padni chahiye ?"
     ]
a = ["1",
     "2",
     "3"
     ]
# LOGIC --------------------------------------------------------------------
score = 0
j = 0
for i in q:
    print(q[j])
    recordesAns = input("Enter the correct answer : ")
    if (recordesAns == a[j]):
        score = score + 1
    else:
        print("Wrong Answer !")
    j = j+1
print("your Score Is ",score)