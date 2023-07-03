a = [18,69]
b = [18,69]
print(a is b) # Compares The EXACT LOCATION in memory (false bcoz both are stored in different memory location)
print(a == b) # Compares The VALUE (true bcoz both have the same value)

print("---------------------------------------------------------------------------------------------------")

a = 69
b = 69
print(a is b) # (true bcoz python stores these types of variables iin the same memory location instead of a big room.)
print(a == b) # (true bcoz both have the same value)