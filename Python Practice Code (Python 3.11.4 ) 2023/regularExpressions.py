import re
from os import system
system("cls")


pattern = r"[A-Z]yclone"
text = '''The English Wikipedia is, with the Simple English Wikipedia, one of two English-language editions of Wikipedia, an online encyclopedia. It was founded on January 15, 2001, as Wikipedia's first edition, and, as of July 1, 2023, has the most articles of any edition, at 6,677,146.[1] As of July 2023, 10.9% of articles in all Wikipedias belong to the English-language edition; this share is down from more than 50% in 2003.[2][3] The edition's one-billionth edit was made on January 13, 2021.[4] Cyclone Dyclone Fyclone'''

# ------------------------------------------------------------------------------------------------------------------------------------

# ONLY FINDS ONE OCCURENCE AND THEN STOPS
# match = re.search(pattern,text)  # ----------> stops on finding first occurence
# print(match.span())



# FINDS ALL OCCURENCES AND THEN STOPS
matches = re.finditer(pattern,text)
# print(matches) # Output = <callable_iterator object at 0x000002259029A9E0>
for match in matches:
      # print(match) # Output = <re.Match object; span=(x, y), match='wordPerIteration'>
      # print(match.span()) # Output = (x, y)(tuple) :--> (This Cannot work for matches coz it only works for singular match objects not iterators)
      print(text[ match.span()[0]: match.span()[1] ]) # ------------> applying tuple methods to manipulate the strings